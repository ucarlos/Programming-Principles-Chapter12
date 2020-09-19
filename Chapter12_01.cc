/*
 * -----------------------------------------------------------------------------
 * Created by Ulysses Carlos on 09/19/2020 at 04:50 PM
 * 
 * Chapter12_01.cc
 * Draw a rectangle as a Rectangle and as a Polygon. Make the lines of the
 * Polygon red and the lines of the Rectangle blue.
 * -----------------------------------------------------------------------------
 */

#include "GUI/Simple_window.h"
using Simple_Window = Simple_window;
using namespace Graph_lib;

int main(void){
    Point fl{100, 100};
    Simple_Window w{fl, 800, 600, "Chapter12_01"};

    Point p1{200, 200};
    // Make a Rectangle:
    Rectangle rec{p1, 200, 300};
    rec.set_color(Color::blue);

    // Now make a polygon
    Polygon poly{};
    poly.add(Point{500, 200});
    poly.add(Point{700, 200});
    poly.add(Point{700, 500});
    poly.add(Point{500, 500});
    poly.set_color(Color::red);

    // Now attach
    w.attach(rec);
    w.attach(poly);
    w.wait_for_button();

}

