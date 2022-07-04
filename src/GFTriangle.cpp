#include "GFTriangle.h"

// constructors
GFTriangle::GFTriangle() {}

// setters
void GFTriangle::setSide(double inSide) { side = inSide; }

// getters
double GFTriangle::getSide() const { return side; }

// methods

/*!
 * @brief Subroutine for calculating the area of a figure.
 * @return Returns the area of the shape.
 */
double GFTriangle::area() const {
    return side * side * sqrt(3) / 4;
}

/*!
 * @brief The subroutine finds a rectangle that describes the figure completely.
 * @return Returns a rectangle object.
 */
GFRectangle* GFTriangle::findingRectangle() const {
    auto rect = new GFRectangle();

    // setting margins
    rect->setCenter(this->getCenter());
    rect->setWidth(this->getSide());
    rect->setHeight(this->getSide() * sqrt(3) / 2);

    return rect;
}
