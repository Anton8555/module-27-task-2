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
    double getWidth();
    double getHeight();

    // methods
    double area();  // площадь фигуры
    GFRectangle* findingRectangle();   // нахождение прямоугольника, описывающего фигуру полностью
};