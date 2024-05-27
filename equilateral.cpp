#include "equilateral.h"
#include "triangle.h"
#include <sstream>

Equilateral::Equilateral(double sideLength) : Triangle(sideLength, sideLength, sideLength) {}

string Equilateral::ToString() const {
    std::stringstream retVal;
    retVal << "{Equilateral " << Triangle::ToString() << "}";
    return retVal.str();
}
