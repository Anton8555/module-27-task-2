#include "GFRectangle.h"

// constructors
GFRectangle::GFRectangle() {}

// setters
void GFRectangle::setWidth(double inWidth) { width = inWidth; }
void GFRectangle::setHeight(double inHeight) { height = inHeight; }

// getters
double GFRectangle::getWidth() const { return width; }
double GFRectangle::getHeight() const { return height; }

// methods

/*!
 * @brief Subroutine for calculating the area of a figure.
 * @return Returns the area of the shape.
 */
double GFRectangle::area() const {
    return width * height;
}

/*!
 * @brief The subroutine finds a rectangle that describes the figure completely.
 * @return Returns a rectangle object.
 */
GFRectangle* GFRectangle::findingRectangle() const{
    auto rect = new GFRectangle();

    // copy fields
    rect->setCenter(this->getCenter());
    rect->setWidth(this->getWidth());
    rect->setHeight(this->getHeight());

    return rect;
}
