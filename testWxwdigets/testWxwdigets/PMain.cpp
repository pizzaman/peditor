//
//  PMain.cpp
//  testWxwdigets
//
//  Created by pizzaman on 16/5/14.
//  Copyright (c) 2016年 pizzaman. All rights reserved.
//

#include "PMain.h"
#include "MainFrame.h"

IMPLEMENT_APP(PMain)

IMPLEMENT_CLASS(PMain, wxApp)

BEGIN_EVENT_TABLE( PMain, wxApp )

END_EVENT_TABLE()

bool PMain::OnInit()
{
    if ( !wxApp::OnInit() )
        return false;
    
    MainFrame *frame = new MainFrame("Minimal wxWidgets App");
    frame->Show(true);
    return true;
}

int PMain::OnExit()
{
    return wxApp::OnExit();
}