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
    double getX() const;
    double getY() const;

    // methods
    void add(Vector2DDouble v);
    void input(const string &caption, double xLow, double xHigh, double yLow, double yHigh);
    string output() const;
};

// Subroutine for entering a real within a range.
double doubleInput(const string &caption, double low, double high);

// Subroutine for entering an integer within a range.
int intInput(const string &caption, int low, int high);
