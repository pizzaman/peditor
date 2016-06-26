//
//  MainFrame.cpp
//  testWxwdigets
//
//  Created by pizzaman on 15/1/25.
//  Copyright (c) 2015年 pizzaman. All rights reserved.
//

#include "MainFrame.h"
#include "CodeEditor.h"
#include <wx/xrc/xmlres.h>

BEGIN_EVENT_TABLE(MainFrame, wxFrame)
EVT_MENU(wxID_NEW, MainFrame::OnAbout)
EVT_MENU(wxID_EXIT, MainFrame::OnQuit)
END_EVENT_TABLE()


MainFrame::MainFrame(const wxString &title)
: wxFrame(NULL, wxID_ANY, title)
{
    
    wxXmlResource::Get()->LoadFrame(this, NULL, wxT("MyFrame1"));
//    
//    wxMenu *fileMenu = new wxMenu();
//    wxMenu *aboutMenu = new wxMenu();
//    aboutMenu->Append(wxID_NEW,wxT("&About\tF1"),wxT("show about dialog"));
//    fileMenu->Append(wxID_EXIT,wxT("&Exit...\tAlt-x"),wxT("Quit this programe"));
//    
//    wxMenuBar *bar = new wxMenuBar();
//    bar->Append(aboutMenu, wxT("&About"));
//    bar->Append(fileMenu, wxT("&Exit"));
//    
//    SetMenuBar(bar);
//    CreateStatusBar(2);
//    SetStatusText("welcome to my frame");
    
    CodeEditor *code = new CodeEditor(this,1);
    code->initComponent();
    
    
}

void MainFrame::OnAbout(wxCommandEvent &event)
{
    wxString msg;
    msg.Printf(wxT("hello and welcome to %s"),wxVERSION_STRING);
    wxMessageBox(msg,wxT("about minimal"),wxOK|wxICON_INFORMATION,this);
}

void MainFrame::OnQuit(wxCommandEvent &event)
{
    Close(true);
}
