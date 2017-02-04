#include "tool.h"

namespace tools {

Tool::Tool()
{

}

std::shared_ptr<ToolOptions> Tool::getOptions() const
{
    return options;
}

void Tool::setOptions(const std::shared_ptr<ToolOptions> &value)
{
    options = value;
}


}
