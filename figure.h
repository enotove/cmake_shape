#pragma once
#include <iostream>
#include <string>
class Figure
{
protected:
    int corners;
    std::string nameFigure;
public:
    Figure()
    {
        this->corners = 0;
    }
    std::string PringNameFigure() { return nameFigure; }
    virtual std::string PrintSide() { return ""; }
    virtual std::string PrintAngle() { return ""; }
};