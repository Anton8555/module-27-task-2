#pragma once

#include "geometric_figure.h"
#include "GFRectangle.h"

class GFSquare : public GeometricFigure {
    double side = 0;
public:
    // constructors
    GFSquare();

    // setters
    void setSide(double inSide);

    // getters
    double getSide() const;

    // methods
    double area() const;
    GFRectangle* findingRectangle() const;
};