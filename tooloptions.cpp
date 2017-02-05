#include "tooloptions.h"
namespace tools {

ToolOptions::ToolOptions()
{
    //widget = std::make_shared<ToolOptionsWidget>();
}

std::shared_ptr<ToolOptionsWidget> ToolOptions::getWidget() const
{
    return widget;
}


}
