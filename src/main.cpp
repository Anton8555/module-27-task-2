#include <iostream>
#include <string>
#include "figures.h"

using namespace std;


int main() {
    while(true) {
        int in;

        // menu output
        cout
            << "Main menu:\n"
            << "0. exit;\n"
            << "1. Circle;\n"
            << "2. Square;\n"
            << "3. Triangle;\n"
            << "4. Rectangle;\n"
            << ">";

        // input
        cin >> in;

        // analyzer
        switch( in ) {
            case 0: return 0;

            case 1: {
                GFCircle circle;
                Vector2DDouble center;
                Color color;
                double radius;

                // data input
                center.input("Enter the coordinates of the center of the figure:", -1000000, +1000000, -1000000, +1000000);
                color = (Color)intInput("Enter color number (0-7):", 0, 7);
                radius = doubleInput("Enter the radius of the circle (>0):", 0, +1000000);

                // setting shape properties
                circle.setCenter(center);
                circle.setColor(color);
                circle.setRadius(radius);

                // output result of methods
                GFRectangle* rect = circle.findingRectangle();
                cout
                        << "Result of methods:\n"
                        << "\tcolor = " << ColorToString(circle.getColor()) << endl
                        << "\tarea = " << circle.area() << endl
                        << "\tmethod findingRectangle():\n"
                        << "\t\tcenter = " << rect->getCenter().output() << endl
                        << "\t\twidth = " << rect->getWidth() << endl
                        << "\t\theight = " << rect->getHeight() << endl;
                if( rect != nullptr ) {
                    delete rect;
                    rect = nullptr;
                }

                break;
            }// end of case 1

            case 2: {
                GFSquare square;
                Vector2DDouble center;
                Color color;
                double side;

                // data input
                center.input("Enter the coordinates of the center of the figure:", -1000000, +1000000, -1000000, +1000000);
                color = (Color)intInput("Enter color number (0-7):", 0, 7);
                side = doubleInput("Enter the side of the square (>0):", 0, +1000000);

                // setting shape properties
                square.setCenter(center);
                square.setColor(color);
                square.setSide(side);

                // output result of methods
                GFRectangle* rect = square.findingRectangle();
                cout
                        << "Result of methods:\n"
                        << "\tcolor = " << ColorToString(square.getColor()) << endl
                        << "\tarea = " << square.area() << endl
                        << "\tmethod findingRectangle():\n"
                        << "\t\tcenter = " << rect->getCenter().output() << endl
                        << "\t\twidth = " << rect->getWidth() << endl
                        << "\t\theight = " << rect->getHeight() << endl;
                if( rect != nullptr ) {
                    delete rect;
                    rect = nullptr;
                }

                break;
            }// end of case 2

            case 3: {
                GFTriangle triangle;
                Vector2DDouble center;
                Color color;
                double side;

                // data input
                center.input("Enter the coordinates of the center of the figure:", -1000000, +1000000, -1000000, +1000000);
                color = (Color)intInput("Enter color number (0-7):", 0, 7);
                side = doubleInput("Enter the side of the triangle (>0):", 0, +1000000);

                // setting shape properties
                triangle.setCenter(center);
                triangle.setColor(color);
                triangle.setSide(side);

                // output result of methods
                GFRectangle* rect = triangle.findingRectangle();
                cout
                        << "Result of methods:\n"
                        << "\tcolor = " << ColorToString(triangle.getColor()) << endl
                        << "\tarea = " << triangle.area() << endl
                        << "\tmethod findingRectangle():\n"
                        << "\t\tcenter = " << rect->getCenter().output() << endl
                        << "\t\twidth = " << rect->getWidth() << endl
                        << "\t\theight = " << rect->getHeight() << endl;
                if( rect != nullptr ) {
                    delete rect;
                    rect = nullptr;
                }

                break;
            }// end of case 3

            case 4: {
                GFRectangle rectangle;
                Vector2DDouble center;
                Color color;
                double w,h;

                // data input
                center.input("Enter the coordinates of the center of the figure:", -1000000, +1000000, -1000000, +1000000);
                color = (Color)intInput("Enter color number (0-7):", 0, 7);
                w = doubleInput("Enter the width of the rectangle (>0):", 0, +1000000);
                h = doubleInput("Enter the height of the rectangle (>0):", 0, +1000000);

                // setting shape properties
                rectangle.setCenter(center);
                rectangle.setColor(color);
                rectangle.setWidth(w);
                rectangle.setHeight(h);

                // output result of methods
                GFRectangle* rect = rectangle.findingRectangle();
                cout
                        << "Result of methods:\n"
                        << "\tcolor = " << ColorToString(rectangle.getColor()) << endl
                        << "\tarea = " << rectangle.area() << endl
                        << "\tmethod findingRectangle():\n"
                        << "\t\tcenter = " << rect->getCenter().output() << endl
                        << "\t\twidth = " << rect->getWidth() << endl
                        << "\t\theight = " << rect->getHeight() << endl;
                if( rect != nullptr ) {
                    delete rect;
                    rect = nullptr;
                }

                break;
            }// end of case 4
        }// end of switch(in)
    }// end of while(true)
}// end of main()
