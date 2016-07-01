//
//  PMain.cpp
//  testWxwdigets
//
//  Created by pizzaman on 16/5/14.
//  Copyright (c) 2016年 pizzaman. All rights reserved.
//

#include "PMain.h"
#include "MainFrame.h"
#include <wx/filename.h>
#include <wx/xrc/xmlres.h>
#include "PureMVC/PureMVC.hpp"

IMPLEMENT_APP(PMain)

IMPLEMENT_CLASS(PMain, wxApp)

BEGIN_EVENT_TABLE( PMain, wxApp )

END_EVENT_TABLE()

using PureMVC::Interfaces::IFacade;
using PureMVC::Patterns::Facade;

bool PMain::OnInit()
{
    if ( !wxApp::OnInit() )
        return false;

    // Test Factory Method
    IFacade &facade = Facade::getInstance("facade");
    std::string st = facade.getMultitonKey();
    printf("aaa %s",st.c_str());
    wxFileName fname(argv[0]);
    wxString cfgdb = fname.GetPath(wxPATH_GET_VOLUME);
    cfgdb = cfgdb + ("/../Resources/config/");
    
    
//    cfgdb = wxFileName::GetHomeDir() + ("/.wxSQLitePlus");
    
    wxXmlResource::Get()->InitAllHandlers();
    bool result = wxXmlResource::Get()->LoadAllFiles(cfgdb);
    if (!result)
    {
        return false;
    }
    
    MainFrame *frame = new MainFrame("Minimal wxWidgets App");
    frame->Show(true);
    return true;
}

int PMain::OnExit()
{
    return wxApp::OnExit();
}