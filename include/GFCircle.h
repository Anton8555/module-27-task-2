#pragma once

#include "geometric_figure.h"
#include "GFRectangle.h"

class GFCircle: public GeometricFigure {
    double radius = 0;
public:
    // constructors
    GFCircle();

    // setters
    void setRadius(double inRadius);

    // getters
    double getRadius() const;

    // methods
    double area() const;
    GFRectangle* findingRectangle() const;
};