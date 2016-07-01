//
//  CodeEditorCommand.hpp
//  testWxwdigets
//
//  Created by viking on 27/6/16.
//  Copyright © 2016 pizzaman. All rights reserved.
//

#ifndef CodeEditorCommand_hpp
#define CodeEditorCommand_hpp

#include "../PureMVC/PureMVC.hpp"
#include "../model/CodeEditorVO.hpp"
namespace control
{
    using PureMVC::Interfaces::INotification;
    using PureMVC::Patterns::SimpleCommand;
    using model::CodeEditorVO;
    class CodeEditorCommand:public SimpleCommand
    {
        void execute(INotification const& notification)
        {
            CodeEditorVO & vo =  *(CodeEditorVO*) notification.getBody();
            wxLogDebug("codeeditorvo vo %d",vo.getX());
        }
    };
}
#endif /* CodeEditorCommand_hpp */
