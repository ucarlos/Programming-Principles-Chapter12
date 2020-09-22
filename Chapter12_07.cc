/*
 * -----------------------------------------------------------------------------
 * Created by Ulysses Carlos on 09/19/2020 at 08:49 PM
 * 
 * Chapter12_07.cc
 * Draw a two-dimensional house seen from the front, the way a child would;
 * With a door, two windows, and a roof with a chimney. Feel free to add
 * details; maybe have "smoke" come out of the chimney
 * -----------------------------------------------------------------------------
 */

#include "GUI/Simple_window.h"
using namespace Graph_lib;
using Simple_Window = Simple_window;

int main(void){
    Simple_Window win{Point{100, 100}, 800, 600, "Chapter12_07"};

    // Make a rectangle, Triangle for roof,
    // Two squares for windows and maybe a rectangle as a chimney.
    
    Rectangle body{Point{200, 200}, 200, 200};
    body.set_color(Color::white);
    body.set_fill_color(Color::white);


    Text text{Point{100, 500}, "Like the good old times right?"};
    text.set_font_size(12);
    
    Polygon roof{};
    roof.add(Point{200, 200});
    roof.add(Point{300, 100});
    roof.add(Point{400, 200});
    roof.set_color(Color::dark_red);
    roof.set_fill_color(Color::red);

    
    
    Rectangle chimney{Point{200, 100}, 50, 100};
    chimney.set_color(Color::dark_magenta);
    chimney.set_fill_color(Color::magenta);
    
    Rectangle window1{Point{225, 250}, 50, 50};
    window1.set_fill_color(Color::black);
    Rectangle window2{Point{325, 250}, 50, 50};
    window2.set_fill_color(Color::black);
    Rectangle door{Point{275, 325}, 50, 75};
    door.set_fill_color(Color::black);

    // Attach to window
    win.attach(text);
    win.attach(body);
    win.attach(window1);
    win.attach(window2);
    win.attach(door);
    win.attach(chimney);
    win.attach(roof);


    // Now add fox
    Image fox{Point{800, 400}, "fox.jpg"};
    win.attach(fox);
    // Now run the windows
    win.wait_for_button();

}
