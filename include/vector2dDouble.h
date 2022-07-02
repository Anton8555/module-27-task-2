#pragma once

#include <iostream>
#include <string>
using namespace std;

// class 2D coordinate (point)
class Vector2DDouble {
    double X = 0;
    double Y = 0;
public:
    // constructors
    Vector2DDouble();
    Vector2DDouble(double inX, double inY);

    // setters
    void setX(double value);
    void setY(double value);

    // getters
    int getX();
    int getY();

    // methods
    void add(Vector2DDouble v);
    void input(string caption, double xLow, double xHigh, double yLow, double yHigh);
    string output();
};

// Subroutine for entering a real within a range.
double doubleInput(string caption, double low, double high);

// Subroutine for entering an integer within a range.
int intInput(string caption, int low, int high);
