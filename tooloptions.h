#ifndef TOOLOPTION_H
#define TOOLOPTION_H

#include <toolwidgets/tooloptionswidget.h>

#include <memory>


namespace tools {

class ToolOptions
{
public:
    ToolOptions();

    virtual std::shared_ptr<ToolOptionsWidget> getWidget() const;

private:
    std::shared_ptr<ToolOptionsWidget> widget;
};

}
#endif // TOOLOPTION_H
