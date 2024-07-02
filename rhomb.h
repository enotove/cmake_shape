#pragma once
#include "quadrilateral.h"
class Rhomb : public Quadrilateral
{
public:
    Rhomb(float a, float A, float B) : Quadrilateral(a, a, a, a, A, B, A, B) { this->nameFigure = "Rhomb"; }
};