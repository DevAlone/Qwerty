#include "penciloptions.h"

namespace tools {

PencilOptions::PencilOptions(unsigned int size, QColor color)
{
    this->size = size;
    this->color = color;

    widget = std::shared_ptr<PencilOptionsWidget>(new PencilOptionsWidget(this, 0));
}

std::shared_ptr<ToolOptionsWidget> PencilOptions::getWidget() const
{
    return widget;
}

}
