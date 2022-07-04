#include "vector2dDouble.h"

// constructors
Vector2DDouble::Vector2DDouble() {};
Vector2DDouble::Vector2DDouble(double inX, double inY): X(inX), Y(inY) {};

// setters
void Vector2DDouble::setX(double value) { X = value; }
void Vector2DDouble::setY(double value) { Y = value; }

// getters
double Vector2DDouble::getX() const { return X; }
double Vector2DDouble::getY() const { return Y; }

// methods

/*!
 * @brief The function of adding vector.
 * @param v - vector;
*/
void Vector2DDouble::add(Vector2DDouble v) {
    X += v.X;
    Y += v.Y;
}

/*!
 * @brief Routine input vector within ranges.
 * @param caption - input prompt text.
 * @param xLow - lower value of the input range for the X-coordinate.
 * @param xHigh - Upper value of the input range for the X-coordinate.
 * @param yLow - lower value of the input range for the Y-coordinate.
 * @param yHigh - Upper value of the input range for the Y-coordinate.
 * @return Returns a vector in the given range.
*/
void Vector2DDouble::input(const string &caption, double xLow, double xHigh, double yLow, double yHigh) {
    cout << caption << endl;
    cout << "Range [" << xLow << "; " << xHigh << "];\n";
    X = doubleInput("X =", xLow, xHigh);
    cout << "Range [" << yLow << "; " << yHigh << "];\n";
    Y = doubleInput("Y =", yLow, yHigh);
}

/*!
 * @brief Subroutine for getting a vector in string representation.
 * @return Returns a string in the format "(X; Y)".
 */
string Vector2DDouble::output() const {
    return "(" + to_string(X) + "; " + to_string(Y) + ")";
}

/*!
 * @brief Subroutine for entering a real number in a range.
 * @param caption - prompt text to enter.
 * @param low - lower value of the input range.
 * @param high - upper value of the input range.
 * @return Returns a real number within the given range.
 */
double doubleInput(const string &caption, double low, double high) {
    int value;
    do {
        cout << caption;
        cin >> value;
    }while( (value < low) || (value > high) );
    return value;
}

/*!
 * @brief Subroutine for entering an integer number in a range.
 * @param caption - prompt text to enter.
 * @param low - lower value of the input range.
 * @param high - upper value of the input range.
 * @return Returns an integer number within the given range.
 */
int intInput(const string &caption, int low, int high) {
    int value;
    do {
        cout << caption;
        cin >> value;
    }while( (value < low) || (value > high) );
    return value;
}
