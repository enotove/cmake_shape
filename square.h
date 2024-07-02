#pragma once
#include "quadrilateral.h"
class Square : public Quadrilateral
{
public:
    Square(float a) : Quadrilateral(a, a, a, a, 90, 90, 90, 90) { this->nameFigure = "Square"; }
};