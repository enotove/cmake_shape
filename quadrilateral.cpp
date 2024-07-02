#include "quadrilateral.h"

Quadrilateral::Quadrilateral(float a, float b, float c, float d, float A, float B, float C, float D)
{
    this->nameFigure = "Quadrelaterial";
    this->corners = 4;
    this->a = a; this->b = b; this->c = c; this->d = d;
    this->A = A; this->B = B; this->C = C; this->D = D;
}

std::string Quadrilateral::PrintSide()
{
    return "Side: a = " + std::to_string(a) + " b = " + std::to_string(b) + "  c = " + std::to_string(c) + " d = " + std::to_string(d);
}

std::string Quadrilateral::PrintAngle()
{
    return "Angle: a = " + std::to_string(A) + " B = " + std::to_string(B) + " C = " + std::to_string(C) + " D = " + std::to_string(D);
}
