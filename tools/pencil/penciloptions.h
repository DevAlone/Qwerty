#ifndef PENCILOPTIONS_H
#define PENCILOPTIONS_H

#include "penciloptionswidget.h"
#include "tooloptions.h"

#include <QColor>

class PencilOptionsWidget;

namespace tools {

class PencilOptions : public ToolOptions
{
public:
    PencilOptions(unsigned int size = 1, QColor color = Qt::black);
    unsigned int size;
    QColor color;

    std::shared_ptr<ToolOptionsWidget> getWidget() const;

private:
    std::shared_ptr<PencilOptionsWidget> widget;
};

}
#endif // PENCILOPTIONS_H
