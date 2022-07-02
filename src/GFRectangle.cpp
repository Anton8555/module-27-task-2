#include "GFRectangle.h"

// constructors
GFRectangle::GFRectangle() {}

// setters
void GFRectangle::setWidth(double inWidth) { width = inWidth; }
void GFRectangle::setHeight(double inHeight) { height = inHeight; }

// getters
double GFRectangle::getWidth() { return width; }
double GFRectangle::getHeight() { return height; }

// methods
double GFRectangle::area() {
    return width * height;
}

GFRectangle* GFRectangle::findingRectangle() {
    GFRectangle* rect = new GFRectangle();

    // копирование полей
    rect->setCenter(this->getCenter());
    rect->setWidth(this->getWidth());
    rect->setHeight(this->getHeight());

    return rect;
}
