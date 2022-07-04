#pragma once

#include "geometric_figure.h"

class GFRectangle: public GeometricFigure {
    double width = 0;
    double height = 0;
public:
    // constructors
    GFRectangle();

    // setters
    void setWidth(double inWidth);
    void setHeight(double inHeight);

    // getters
    double getWidth() const;
    double getHeight() const;

    // methods
    double area() const;
    GFRectangle* findingRectangle() const;
};