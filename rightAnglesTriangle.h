#pragma once
#include "triangle.h"
class RightAnglesTriangle : public Triangle
{
public:
    RightAnglesTriangle(float a, float b, float c, float A, float B) : Triangle(a, b, c, A, B, 90) { this->nameFigure = "Right-angles Triangle"; }
};