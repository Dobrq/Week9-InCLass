#include "rhombus.h"
#include <sstream>

Rhombus::Rhombus(double sideLength) : Rectangle(sideLength, sideLength) {}

string Rhombus::ToString() const {
    std::stringstream retVal;
    retVal << "{Rhombus " << Rectangle::ToString() << "}";
    return retVal.str();
}
