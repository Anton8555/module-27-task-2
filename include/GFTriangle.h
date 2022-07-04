#pragma once

#include "geometric_figure.h"
#include "GFRectangle.h"
#include <cmath>
using namespace std;

class GFTriangle : public GeometricFigure {
    double side = 0;
public:
    // constructors
    GFTriangle();

    // setters
    void setSide(double inSide);

    // getters
    double getSide() const;

    // methods
    double area() const;
    GFRectangle* findingRectangle() const;
};