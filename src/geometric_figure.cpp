#include "geometric_figure.h"

// constructors
GeometricFigure::GeometricFigure() {}

// setters
void GeometricFigure::setCenter(const Vector2DDouble &inCenter) { center = inCenter; }
void GeometricFigure::setColor(Color inColor) { color = inColor; }

// getters
Vector2DDouble GeometricFigure::getCenter() const { return center; }
Color GeometricFigure::getColor() const { return color; }

/*!
 * @brief A subroutine that calculates a string representation of a color by code.
 * @param color - color code.
 * @return Returns the name of the color.
 */
string ColorToString(Color color) {
    switch( color ) {
        case NONE: return "None";
        case RED: return "Red";
        case BLUE: return "Blue";
        case GREEN: return "Green";
        case PURPLE: return "Purple";
        case BLACK: return "Black";
        case WHITE: return "White";
        case YELLOW: return "Yellow";
        default: return "None";
    }
}
