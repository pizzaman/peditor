/////////////////////////////////////////////////////////////////////////////
// Name:        testpanel.h
// Purpose:     
// Author:      pizzaman
// Modified by: 
// Created:     Mon 16 May 22:47:42 2016
// RCS-ID:      
// Copyright:   SUN
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _TESTPANEL_H_
#define _TESTPANEL_H_


/*!
 * Includes
 */

////@begin includes
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
#define ID_TESTPANEL 10000
#define ID_BUTTON 10001
#define ID_SCROLLEDWINDOW 10002
#define SYMBOL_TESTPANEL_STYLE wxTAB_TRAVERSAL
#define SYMBOL_TESTPANEL_TITLE _("TestPanel")
#define SYMBOL_TESTPANEL_IDNAME ID_TESTPANEL
#define SYMBOL_TESTPANEL_SIZE wxSize(400, 300)
#define SYMBOL_TESTPANEL_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * TestPanel class declaration
 */

class TestPanel: public wxPanel
{    
    DECLARE_DYNAMIC_CLASS( TestPanel )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    TestPanel();
    TestPanel( wxWindow* parent, wxWindowID id = SYMBOL_TESTPANEL_IDNAME, const wxPoint& pos = SYMBOL_TESTPANEL_POSITION, const wxSize& size = SYMBOL_TESTPANEL_SIZE, long style = SYMBOL_TESTPANEL_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_TESTPANEL_IDNAME, const wxPoint& pos = SYMBOL_TESTPANEL_POSITION, const wxSize& size = SYMBOL_TESTPANEL_SIZE, long style = SYMBOL_TESTPANEL_STYLE );

    /// Destructor
    ~TestPanel();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin TestPanel event handler declarations

////@end TestPanel event handler declarations

////@begin TestPanel member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end TestPanel member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin TestPanel member variables
////@end TestPanel member variables
};

#endif
    // _TESTPANEL_H_
