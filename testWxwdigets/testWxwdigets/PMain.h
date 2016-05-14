//
//  PMain.h
//  testWxwdigets
//
//  Created by pizzaman on 16/5/14.
//  Copyright (c) 2016年 pizzaman. All rights reserved.
//

#ifndef __testWxwdigets__PMain__
#define __testWxwdigets__PMain__

class PMain:public wxApp
{
    DECLARE_CLASS(PMain)
    DECLARE_EVENT_TABLE()
public:
    virtual bool OnInit();
    virtual int OnExit();
};

DECLARE_APP(PMain)
#endif /* defined(__testWxwdigets__PMain__) */
