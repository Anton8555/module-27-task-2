#include "GFSquare.h"

// constructors
GFSquare::GFSquare() {}

// setters
void GFSquare::setSide(double inSide) { side = inSide; }

// getters
double GFSquare::getSide() const { return side; }

// methods

/*!
 * @brief Subroutine for calculating the area of a figure.
 * @return Returns the area of the shape.
 */
double GFSquare::area() const {
    return side * side;
}

/*!
 * @brief The subroutine finds a rectangle that describes the figure completely.
 * @return Returns a rectangle object.
 */
GFRectangle* GFSquare::findingRectangle() const {
    auto rect = new GFRectangle();

    // setting margins
    rect->setCenter(this->getCenter());
    rect->setWidth(this->getSide());
    rect->setHeight(this->getSide());

    return rect;
}
