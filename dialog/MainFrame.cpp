/////////////////////////////////////////////////////////////////////////////
// Name:        MainFrame.cpp
// Purpose:     
// Author:      pizzaman
// Modified by: 
// Created:     Mon 16 May 22:47:12 2016
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

#include "MainFrame.h"

////@begin XPM images

////@end XPM images


/*
 * Application instance implementation
 */

////@begin implement app
IMPLEMENT_APP( MainFrame )
////@end implement app


/*
 * MainFrame type definition
 */

IMPLEMENT_CLASS( MainFrame, wxApp )


/*
 * MainFrame event table definition
 */

BEGIN_EVENT_TABLE( MainFrame, wxApp )

////@begin MainFrame event table entries
////@end MainFrame event table entries

END_EVENT_TABLE()


/*
 * Constructor for MainFrame
 */

MainFrame::MainFrame()
{
    Init();
}


/*
 * Member initialisation
 */

void MainFrame::Init()
{
////@begin MainFrame member initialisation
////@end MainFrame member initialisation
}

/*
 * Initialisation for MainFrame
 */

bool MainFrame::OnInit()
{    
////@begin MainFrame initialisation
    // Remove the comment markers above and below this block
    // to make permanent changes to the code.

#if wxUSE_XPM
    wxImage::AddHandler(new wxXPMHandler);
#endif
#if wxUSE_LIBPNG
    wxImage::AddHandler(new wxPNGHandler);
#endif
#if wxUSE_LIBJPEG
    wxImage::AddHandler(new wxJPEGHandler);
#endif
#if wxUSE_GIF
    wxImage::AddHandler(new wxGIFHandler);
#endif
////@end MainFrame initialisation

    return true;
}


/*
 * Cleanup for MainFrame
 */

int MainFrame::OnExit()
{    
////@begin MainFrame cleanup
    return wxApp::OnExit();
////@end MainFrame cleanup
}

