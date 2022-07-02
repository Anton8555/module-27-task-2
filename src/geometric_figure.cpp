#include "geometric_figure.h"

// constructors
GeometricFigure::GeometricFigure() {}

// setters
void GeometricFigure::setCenter(Vector2DDouble inCenter) { center = inCenter; }
void GeometricFigure::setColor(Color inColor) { color = inColor; }

// getters
Vector2DDouble GeometricFigure::getCenter() { return center; }
Color GeometricFigure::getColor() { return color; }

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
    }
}
