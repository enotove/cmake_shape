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
class Triangle : public Figure
{
protected:


    float a, b, c;
    float A, B, C;
public:
    Triangle(float a, float b, float c, float A, float B, float C)
    {
        this->nameFigure = "Triangle";

        this->a = a; this->b = b; this->c = c;
        this->A = A; this->B = B; this->C = C;
    }

    std::string PrintSide() override
    {
        return "Side: a = " + std::to_string(a) + " b = " + std::to_string(b) + "  c = " + std::to_string(c);
    }
    std::string PrintAngle() override
    {
        return "Angle: a = " + std::to_string(A) + " B = " + std::to_string(B) + " C = " + std::to_string(C);
    }
};
class Quadrilateral : public Figure
{
protected:

    float a, b, c, d;
    float A, B, C, D;
public:
    Quadrilateral(float a, float b, float c, float d, float A, float B, float C, float D)
    {
        this->nameFigure = "Quadrelaterial";
        this->corners = 4;
        this->a = a; this->b = b; this->c = c; this->d = d;
        this->A = A; this->B = B; this->C = C; this->D = D;
    }
    std::string PrintSide() override
    {
        return "Side: a = " + std::to_string(a) + " b = " + std::to_string(b) + "  c = " + std::to_string(c) + " d = " + std::to_string(d);
    }
    std::string PrintAngle() override
    {
        return "Angle: a = " + std::to_string(A) + " B = " + std::to_string(B) + " C = " + std::to_string(C) + " D = " + std::to_string(D);
    }
};
class RightAnglesTriangle : public Triangle
{
public:
    RightAnglesTriangle(float a, float b, float c, float A, float B) : Triangle(a, b, c, A, B, 90) { this->nameFigure = "Right-angles Triangle"; }
};
class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle(float a, float b, float A, float B) : Triangle(a, b, a, A, B, A) { this->nameFigure = "Isosceles Triangle"; }
};
class EquilateralTriangle : public Triangle
{
public:
    EquilateralTriangle(float a) : Triangle(a, a, a, 60, 60, 60) { this->nameFigure = "Equilateral Triangle"; }
};
class Rectangle : public Quadrilateral
{
public:
    Rectangle(float a, float b) : Quadrilateral(a, b, a, b, 90, 90, 90, 90) { this->nameFigure = "Rectangle"; }
};
class Square : public Quadrilateral
{
public:
    Square(float a) : Quadrilateral(a, a, a, a, 90, 90, 90, 90) { this->nameFigure = "Square"; }
};
class Parallelogram : public Quadrilateral
{
public:
    Parallelogram(float a, float b, float A, float B) : Quadrilateral(a, b, a, b, A, B, A, B) { this->nameFigure = "Parallelogram"; }
};
class Rhomb : public Quadrilateral
{
public:
    Rhomb(float a, float A, float B) : Quadrilateral(a, a, a, a, A, B, A, B) { this->nameFigure = "Rhomb"; }
};

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