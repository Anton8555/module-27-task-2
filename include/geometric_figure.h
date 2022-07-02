#pragma once

#include "vector2dDouble.h"

enum Color {NONE, RED, BLUE, GREEN, PURPLE, BLACK, WHITE, YELLOW};

class GeometricFigure {
    Vector2DDouble center;
    Color color = NONE;
public:
    // constructors
    GeometricFigure();

    // setters
    void setCenter(Vector2DDouble inCenter);
    void setColor(Color inColor);

    // getters
    Vector2DDouble getCenter();
    Color getColor();
};

string ColorToString(Color color);