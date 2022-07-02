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
    double getRadius();

    // methods
    double area();  // площадь фигуры
    GFRectangle* findingRectangle();   // нахождение прямоугольника, описывающего фигуру полностью
};