/////////////////////////////////////////////////////////////////////////////
// Name:        MainFrame.h
// Purpose:     
// Author:      pizzaman
// Modified by: 
// Created:     Mon 16 May 22:47:12 2016
// RCS-ID:      
// Copyright:   SUN
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _MAINFRAME_H_
#define _MAINFRAME_H_


/*!
 * Includes
 */

////@begin includes
#include "wx/image.h"
////@end includes

/*!
 * Forward declarations
 */

////@begin forward declarations
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
////@end control identifiers

/*!
 * MainFrame class declaration
 */

class MainFrame: public wxApp
{    
    DECLARE_CLASS( MainFrame )
    DECLARE_EVENT_TABLE()

public:
    /// Constructor
    MainFrame();

    void Init();

    /// Initialises the application
    virtual bool OnInit();

    /// Called on exit
    virtual int OnExit();

////@begin MainFrame event handler declarations
////@end MainFrame event handler declarations

////@begin MainFrame member function declarations
////@end MainFrame member function declarations

////@begin MainFrame member variables
////@end MainFrame member variables
};

/*!
 * Application instance declaration 
 */

////@begin declare app
DECLARE_APP(MainFrame)
////@end declare app

#endif
    // _MAINFRAME_H_
