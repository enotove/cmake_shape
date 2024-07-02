#pragma once
#include "quadrilateral.h"
class Parallelogram : public Quadrilateral
{
public:
    Parallelogram(float a, float b, float A, float B) : Quadrilateral(a, b, a, b, A, B, A, B) { this->nameFigure = "Parallelogram"; }
};