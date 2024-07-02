#include <iostream>
#include <string>
#include "figure.h"
#include "triangle.h"
#include "rightAnglesTriangle.h"
#include "isoscelesTriangle.h"
#include "equilateralTriangle.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhomb.h"

void print_info(Figure& figure)
{
    std::cout << "Figure: " << figure.PringNameFigure() << std::endl;
    std::cout << figure.PrintSide() << std::endl;
    std::cout << figure.PrintAngle() << std::endl << std::endl;
}

int main()
{
    Triangle triangle = Triangle(42.f, 32.f, 43.f, 53.f, 53.f, 23.f);
    RightAnglesTriangle r_a_triagle = RightAnglesTriangle(23.f, 24.f, 35.f, 20.f, 43.f);
    IsoscelesTriangle isoscelesTriagle = IsoscelesTriangle(32.f, 43.f, 43.f, 65.f);
    EquilateralTriangle equilateralTriangle = EquilateralTriangle(32.f);
    Quadrilateral quadrilateral = Quadrilateral(50.f, 70.f, 32.f, 67.f, 85.f, 74.f, 54.f, 23.f);
    Rectangle rectangle = Rectangle(70.f, 30.f);
    Square square = Square(78.f);
    Parallelogram parallelogram = Parallelogram(32.f, 64.f, 70.f, 43.f);
    Rhomb rhomb = Rhomb(60.f, 64.f, 32.f);
    print_info(triangle);
    print_info(r_a_triagle);
    print_info(isoscelesTriagle);
    print_info(equilateralTriangle);
    print_info(quadrilateral);
    print_info(rectangle);
    print_info(square);
    print_info(parallelogram);
    print_info(rhomb);

}