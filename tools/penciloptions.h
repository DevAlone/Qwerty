#ifndef PENCILOPTIONS_H
#define PENCILOPTIONS_H

#include "tooloptions.h"

#include <QColor>


namespace tools {

class PencilOptions : public ToolOptions
{
public:
    PencilOptions();
    unsigned int size;
    QColor color;
};

}
#endif // PENCILOPTIONS_H
