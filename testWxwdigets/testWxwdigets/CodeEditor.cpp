//
//  CodeEditor.cpp
//  testWxwdigets
//
//  Created by pizzaman on 15/4/12.
//  Copyright (c) 2015年 pizzaman. All rights reserved.
//

#include "CodeEditor.h"
#include "wx/wx.h"
#include "wx/stc/stc.h"

enum
{
    MARGIN_LINE_NUMBERS,
    MARGIN_FOLD
};

const char* source = "// Some example\n"
"#define MAX 0\n\n"
"/** @brief The entry point */\n"
"int main(int argc, char *argv[])\n"
"{\n"
"    for (int n=0; n<MAX; n++)\n"
"    {\n"
"        printf(\"Hello World %i\\n\", n);\n"
"    }\n"
"    return 0;\n"
"}\n";

CodeEditor::CodeEditor(wxWindow *parent, const  wxWindowID id):wxWindow(parent,id)
{
    
}

CodeEditor::~CodeEditor()
{
    
}

//void CodeEditor::initComponent()
//{
//    textctrl = new wxStyledTextCtrl(this,wxID_ANY);
//    textctrl->SetMarginWidth (MARGIN_LINE_NUMBERS, 50);
//    textctrl->StyleSetForeground (wxSTC_STYLE_LINENUMBER, wxColour (75, 75, 75) );
//    textctrl->StyleSetBackground (wxSTC_STYLE_LINENUMBER, wxColour (220, 220, 220));
//    textctrl->SetMarginType (MARGIN_LINE_NUMBERS, wxSTC_MARGIN_NUMBER);
//    
//    textctrl->SetWrapMode (wxSTC_WRAP_WORD);
//    
//    textctrl->SetText(source);
//    
//    textctrl->StyleClearAll();
//    textctrl->SetLexer(wxSTC_LEX_HTML);
//    textctrl->StyleSetForeground (wxSTC_H_DOUBLESTRING,     wxColour(255,0,0));
//    textctrl->StyleSetForeground (wxSTC_H_SINGLESTRING,     wxColour(255,0,0));
//    textctrl->StyleSetForeground (wxSTC_H_ENTITY,           wxColour(255,0,0));
//    textctrl->StyleSetForeground (wxSTC_H_TAG,              wxColour(0,150,0));
//    textctrl->StyleSetForeground (wxSTC_H_TAGUNKNOWN,       wxColour(0,150,0));
//    textctrl->StyleSetForeground (wxSTC_H_ATTRIBUTE,        wxColour(0,0,150));
//    textctrl->StyleSetForeground (wxSTC_H_ATTRIBUTEUNKNOWN, wxColour(0,0,150));
//    textctrl->StyleSetForeground (wxSTC_H_COMMENT,          wxColour(150,150,150));
//    
//    wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);
//    sizer->Add(textctrl, 1, wxEXPAND);
//    SetSizer(sizer);
//}

void CodeEditor::initComponent()
{
    text = new wxStyledTextCtrl(this, wxID_ANY);
    
    text->StyleClearAll();
    text->SetLexer(wxSTC_LEX_CPP);
    
    text->SetMarginWidth (MARGIN_LINE_NUMBERS, 50);
    text->StyleSetForeground (wxSTC_STYLE_LINENUMBER, wxColour (75, 75, 75) );
    text->StyleSetBackground (wxSTC_STYLE_LINENUMBER, wxColour (220, 220, 220));
    text->SetMarginType (MARGIN_LINE_NUMBERS, wxSTC_MARGIN_NUMBER);
    
    
    // ---- Enable code folding
    text->SetMarginType (MARGIN_FOLD, wxSTC_MARGIN_SYMBOL);
    text->SetMarginWidth(MARGIN_FOLD, 15);
    text->SetMarginMask (MARGIN_FOLD, wxSTC_MASK_FOLDERS);
    text->StyleSetBackground(MARGIN_FOLD, wxColor(200, 200, 200) );
    text->SetMarginSensitive(MARGIN_FOLD, true);
    
    // Properties found from http://www.scintilla.org/SciTEDoc.html
    text->SetProperty (wxT("fold"),         wxT("1") );
    text->SetProperty (wxT("fold.comment"), wxT("1") );
    text->SetProperty (wxT("fold.compact"), wxT("1") );
    
    wxColor grey( 100, 100, 100 );
    text->MarkerDefine (wxSTC_MARKNUM_FOLDER, wxSTC_MARK_ARROW );
    text->MarkerSetForeground (wxSTC_MARKNUM_FOLDER, grey);
    text->MarkerSetBackground (wxSTC_MARKNUM_FOLDER, grey);
    
    text->MarkerDefine (wxSTC_MARKNUM_FOLDEROPEN,    wxSTC_MARK_ARROWDOWN);
    text->MarkerSetForeground (wxSTC_MARKNUM_FOLDEROPEN, grey);
    text->MarkerSetBackground (wxSTC_MARKNUM_FOLDEROPEN, grey);
    
    text->MarkerDefine (wxSTC_MARKNUM_FOLDERSUB,     wxSTC_MARK_EMPTY);
    text->MarkerSetForeground (wxSTC_MARKNUM_FOLDERSUB, grey);
    text->MarkerSetBackground (wxSTC_MARKNUM_FOLDERSUB, grey);
    
    text->MarkerDefine (wxSTC_MARKNUM_FOLDEREND,     wxSTC_MARK_ARROW);
    text->MarkerSetForeground (wxSTC_MARKNUM_FOLDEREND, grey);
    text->MarkerSetBackground (wxSTC_MARKNUM_FOLDEREND, _T("WHITE"));
    
    text->MarkerDefine (wxSTC_MARKNUM_FOLDEROPENMID, wxSTC_MARK_ARROWDOWN);
    text->MarkerSetForeground (wxSTC_MARKNUM_FOLDEROPENMID, grey);
    text->MarkerSetBackground (wxSTC_MARKNUM_FOLDEROPENMID, _T("WHITE"));
    
    text->MarkerDefine (wxSTC_MARKNUM_FOLDERMIDTAIL, wxSTC_MARK_EMPTY);
    text->MarkerSetForeground (wxSTC_MARKNUM_FOLDERMIDTAIL, grey);
    text->MarkerSetBackground (wxSTC_MARKNUM_FOLDERMIDTAIL, grey);
    
    text->MarkerDefine (wxSTC_MARKNUM_FOLDERTAIL,    wxSTC_MARK_EMPTY);
    text->MarkerSetForeground (wxSTC_MARKNUM_FOLDERTAIL, grey);
    text->MarkerSetBackground (wxSTC_MARKNUM_FOLDERTAIL, grey);
    // ---- End of code folding part
    
    text->SetWrapMode (wxSTC_WRAP_WORD); // other choice is wxSCI_WRAP_NONE
    
    text->SetText(source);
    
    text->StyleSetForeground (wxSTC_C_STRING,            wxColour(150,0,0));
    text->StyleSetForeground (wxSTC_C_PREPROCESSOR,      wxColour(165,105,0));
    text->StyleSetForeground (wxSTC_C_IDENTIFIER,        wxColour(40,0,60));
    text->StyleSetForeground (wxSTC_C_NUMBER,            wxColour(0,150,0));
    text->StyleSetForeground (wxSTC_C_CHARACTER,         wxColour(150,0,0));
    text->StyleSetForeground (wxSTC_C_WORD,              wxColour(0,0,150));
    text->StyleSetForeground (wxSTC_C_WORD2,             wxColour(0,150,0));
    text->StyleSetForeground (wxSTC_C_COMMENT,           wxColour(150,150,150));
    text->StyleSetForeground (wxSTC_C_COMMENTLINE,       wxColour(150,150,150));
    text->StyleSetForeground (wxSTC_C_COMMENTDOC,        wxColour(150,150,150));
    text->StyleSetForeground (wxSTC_C_COMMENTDOCKEYWORD, wxColour(0,0,200));
    text->StyleSetForeground (wxSTC_C_COMMENTDOCKEYWORDERROR, wxColour(0,0,200));
    text->StyleSetBold(wxSTC_C_WORD, true);
    text->StyleSetBold(wxSTC_C_WORD2, true);
    text->StyleSetBold(wxSTC_C_COMMENTDOCKEYWORD, true);
    
    // a sample list of keywords, I haven't included them all to keep it short...
    text->SetKeyWords(0, wxT("return for while break continue"));
    text->SetKeyWords(1, wxT("const int float void char double"));
    
    wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);
    sizer->Add(text, 1, wxEXPAND);
    SetSizer(sizer);
    
    text->Connect(wxEVT_STC_MARGINCLICK, wxStyledTextEventHandler(CodeEditor::OnMarginClick), NULL, this);
}

/** Event callback when a margin is clicked, used here for code folding */
void CodeEditor::OnMarginClick(wxStyledTextEvent &event)
{
    if (event.GetMargin() == MARGIN_FOLD)
    {
        int lineClick = text->LineFromPosition(event.GetPosition());
        int levelClick = text->GetFoldLevel(lineClick);
        
        if ((levelClick & wxSTC_FOLDLEVELHEADERFLAG) > 0)
        {
            text->ToggleFold(lineClick);
        }
    }
}

