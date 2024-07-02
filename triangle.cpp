#include "triangle.h"

Triangle::Triangle(float a, float b, float c, float A, float B, float C)
{
    
    this->nameFigure = "Triangle";

    this->a = a; this->b = b; this->c = c;
    this->A = A; this->B = B; this->C = C;
    
}

std::string Triangle::PrintSide()
{
    
    return "Side: a = " + std::to_string(a) + " b = " + std::to_string(b) + "  c = " + std::to_string(c);
    
}

std::string Triangle::PrintAngle()
{
    return "Angle: a = " + std::to_string(A) + " B = " + std::to_string(B) + " C = " + std::to_string(C);
}
