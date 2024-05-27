#ifndef SHAPES_EXAMPLE_1_EQUILATERAL_H
#define SHAPES_EXAMPLE_1_EQUILATERAL_H

#include "triangle.h"

class Equilateral : public Triangle {
public:
    Equilateral(double sideLength);
    virtual string ToString()const;
};

#endif //SHAPES_EXAMPLE_1_EQUILATERAL_H
