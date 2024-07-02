#pragma once
#include "triangle.h"
class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle(float a, float b, float A, float B) : Triangle(a, b, a, A, B, A) { this->nameFigure = "Isosceles Triangle"; }
};