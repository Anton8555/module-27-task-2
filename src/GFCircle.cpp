#include "GFCircle.h"

// constructors
GFCircle::GFCircle() {}

// setters
void GFCircle::setRadius(double inRadius) { radius = inRadius; }

// getters
double GFCircle::getRadius() const { return radius; }

// methods

/*!
 * @brief Subroutine for calculating the area of a figure.
 * @return Returns the area of the shape.
 */
double GFCircle::area() const {
    const double pi = 3.1415;
    return pi * radius * radius;
}

/*!
 * @brief The subroutine finds a rectangle that describes the figure completely.
 * @return Returns a rectangle object.
 */
GFRectangle* GFCircle::findingRectangle() const {
    auto rect = new GFRectangle();

    // copy the center of the shape
    rect->setCenter(this->getCenter());
    // calculating the sides of a rectangle
    double sid = 2 * this->radius;
    rect->setWidth(sid);
    rect->setHeight(sid);

    return rect;
}
