#ifndef SHAPES_EXAMPLE_1_RHOMBUS_H
#define SHAPES_EXAMPLE_1_RHOMBUS_H

#include "rectangle.h"

class Rhombus : public Rectangle {
public:
    Rhombus(double sideLength);
    virtual string ToString()const;
};

#endif //SHAPES_EXAMPLE_1_RHOMBUS_H
