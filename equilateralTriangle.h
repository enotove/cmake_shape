#pragma once
#include "triangle.h"
class EquilateralTriangle : public Triangle
{
public:
    EquilateralTriangle(float a) : Triangle(a, a, a, 60, 60, 60) { this->nameFigure = "Equilateral Triangle"; }
};