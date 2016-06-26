/////////////////////////////////////////////////////////////////////////////
// Name:        testpanel.cpp
// Purpose:     
// Author:      pizzaman
// Modified by: 
// Created:     Mon 16 May 22:47:42 2016
// RCS-ID:      
// Copyright:   SUN
// Licence:     
/////////////////////////////////////////////////////////////////////////////

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

////@begin includes
////@end includes

#include "testpanel.h"

////@begin XPM images
////@end XPM images


/*
 * TestPanel type definition
 */

IMPLEMENT_DYNAMIC_CLASS( TestPanel, wxPanel )


/*
 * TestPanel event table definition
 */

BEGIN_EVENT_TABLE( TestPanel, wxPanel )

////@begin TestPanel event table entries
////@end TestPanel event table entries

END_EVENT_TABLE()


/*
 * TestPanel constructors
 */

TestPanel::TestPanel()
{
    Init();
}

TestPanel::TestPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create(parent, id, pos, size, style);
}


/*
 * TestPanel creator
 */

bool TestPanel::Create( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
////@begin TestPanel creation
    SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    wxPanel::Create( parent, id, pos, size, style );

    CreateControls();
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end TestPanel creation
    return true;
}


/*
 * TestPanel destructor
 */

TestPanel::~TestPanel()
{
////@begin TestPanel destruction
////@end TestPanel destruction
}


/*
 * Member initialisation
 */

void TestPanel::Init()
{
////@begin TestPanel member initialisation
////@end TestPanel member initialisation
}


/*
 * Control creation for TestPanel
 */

void TestPanel::CreateControls()
{    
////@begin TestPanel content construction
    TestPanel* itemPanel1 = this;

    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemPanel1->SetSizer(itemBoxSizer2);

    wxButton* itemButton3 = new wxButton( itemPanel1, ID_BUTTON, _("Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer2->Add(itemButton3, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxScrolledWindow* itemScrolledWindow4 = new wxScrolledWindow( itemPanel1, ID_SCROLLEDWINDOW, wxDefaultPosition, wxSize(100, 100), wxSUNKEN_BORDER|wxHSCROLL|wxVSCROLL );
    itemBoxSizer2->Add(itemScrolledWindow4, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);
    itemScrolledWindow4->SetScrollbars(1, 1, 0, 0);

////@end TestPanel content construction
}


/*
 * Should we show tooltips?
 */

bool TestPanel::ShowToolTips()
{
    return true;
}

/*
 * Get bitmap resources
 */

wxBitmap TestPanel::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin TestPanel bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end TestPanel bitmap retrieval
}

/*
 * Get icon resources
 */

wxIcon TestPanel::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin TestPanel icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end TestPanel icon retrieval
}
