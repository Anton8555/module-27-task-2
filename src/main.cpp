#include <iostream>
#include <string>
#include "vector2dDouble.h"
#include "geometric_figure.h"
#include "GFRectangle.h"
#include "GFCircle.h"

using namespace std;


int main() {
    while(true) {
        int in;

        // menu output
        cout
            << "Main menu:\n"
            << "0. exit;"
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
                delete rect;
                rect = nullptr;

                break;
            }// end of case 1


        }// end of switch(in)
    }// end of while(true)
}// end of main()
