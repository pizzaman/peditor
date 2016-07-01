//
//  CodeEditorVO.hpp
//  testWxwdigets
//
//  Created by viking on 27/6/16.
//  Copyright © 2016 pizzaman. All rights reserved.
//

#ifndef CodeEditorVO_hpp
#define CodeEditorVO_hpp

#include <stdio.h>
namespace model
{
    class CodeEditorVO
    {
    public:
        void setX(int x);
        void setY(int y);
        int getX();
        int getY();
    private:
        int x;
        int y;
        
    };
}

#endif /* CodeEditorVO_hpp */
