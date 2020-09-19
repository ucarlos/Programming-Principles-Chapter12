/*
 * -----------------------------------------------------------------------------
 * Created by Ulysses Carlos on 09/19/2020 at 05:26 PM
 * 
 * Chapter12_03.cc
 * Draw your initals 150 pixels high. Use a thick line. Draw each inital in a
 * different color.
 * -----------------------------------------------------------------------------
 */

#include "GUI/Simple_window.h"
using namespace Graph_lib;
using Simple_Window = Simple_window;

int main(void){
    Simple_Window win{Point{100, 100}, 800, 600, "Chapter12_03"};
    Text first_inital{Point{200, 300}, "U"};
    Text last_inital{Point{300, 300}, "C"};
    
    first_inital.set_font_size(150);
    first_inital.set_color(Color::dark_blue);
    last_inital.set_font_size(150);
    last_inital.set_color(Color::dark_green);

    win.attach(first_inital);
    win.attach(last_inital);

    win.wait_for_button();
    
    
}
