#include "GFCircle.h"

// constructors
GFCircle::GFCircle() {}

// setters
void GFCircle::setRadius(double inRadius) { radius = inRadius; }

// getters
double GFCircle::getRadius() { return radius; }

// methods
double GFCircle::area() {
    const double pi = 3.1415;
    return 2 * pi * radius;
}

GFRectangle* GFCircle::findingRectangle() {
    GFRectangle* rect = new GFRectangle();

    // копирование центра фигуры
    rect->setCenter(this->getCenter());
    // вычисление сторон прямоугольника
    double sid = 2 * this->radius;
    rect->setWidth(sid);
    rect->setHeight(sid);

    return rect;
}
