#pragma once
#include "figure.h"

class Quadrilateral : public Figure
{
protected:

    float a, b, c, d;
    float A, B, C, D;
public:
    Quadrilateral(float a, float b, float c, float d, float A, float B, float C, float D);
    std::string PrintSide() override;
    std::string PrintAngle() override;
};