//
//  MainFrame.h
//  testWxwdigets
//
//  Created by pizzaman on 15/1/25.
//  Copyright (c) 2015年 pizzaman. All rights reserved.
//

#ifndef __testWxwdigets__MainFrame__
#define __testWxwdigets__MainFrame__

#include <stdio.h>

class MainFrame:public wxFrame
{
public:
    MainFrame(const wxString& title);
    void OnQuit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
private:
    DECLARE_EVENT_TABLE();
};

#endif /* defined(__testWxwdigets__MainFrame__) */
