//
//  ConfigFileUtil.h
//  testWxwdigets
//
//  Created by pizzaman on 15/4/24.
//  Copyright (c) 2015年 pizzaman. All rights reserved.
//

#ifndef __testWxwdigets__ConfigFileUtil__
#define __testWxwdigets__ConfigFileUtil__

#include <stdio.h>

enum configType{
    wxConfigIniFile,
    wxConfigXmlFile,
    wxConfigJsonFile
};

class ConfigFileUtil
{
public:
    ConfigFileUtil();
    ~ConfigFileUtil();
    void syncLoadConfig(wxString fileName, configType wxConfigIniFile);
    
};

class FileUtil
{
public:
    static void readFile(wxString path);
};


#endif /* defined(__testWxwdigets__ConfigFileUtil__) */
