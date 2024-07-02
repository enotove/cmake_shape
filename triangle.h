#pragma once
#include "figure.h"
class Triangle : public Figure
{
protected:


    float a, b, c;
    float A, B, C;
public:
    Triangle(float a, float b, float c, float A, float B, float C);
    

    std::string PrintSide() override;
    
    std::string PrintAngle() override;
};