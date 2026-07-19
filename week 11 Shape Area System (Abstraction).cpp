/* program to compute the shape area system,,Frashiah wamuhu,BCS-05-0007/2025*/


#include <iostream>
using namespace std;

// Abstract Class
class Shape
{
public:
    // Pure virtual function
    virtual void calculateArea() = 0;
};

// Derived Class - Circle
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }

    void calculateArea()
    {
        double area = 3.142 * radius * radius;
        cout << "Area of Circle = " << area << endl;
    }
};

// Derived Class - Rectangle
class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    void calculateArea()
    {
        double area = length * width;
        cout << "Area of Rectangle = " << area << endl;
    }
};

int main()
{
    Shape *shape;

    Circle c(7);
    Rectangle r(8, 5);

    shape = &c;
    shape->calculateArea();

    shape = &r;
    shape->calculateArea();

    return 0;
}
