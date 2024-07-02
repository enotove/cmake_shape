#pragma once
#include "quadrilateral.h"

class Rectangle : public Quadrilateral
{
public:
    Rectangle(float a, float b) : Quadrilateral(a, b, a, b, 90, 90, 90, 90) { this->nameFigure = "Rectangle"; }
};