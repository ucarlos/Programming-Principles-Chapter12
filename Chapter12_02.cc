/*
 * -----------------------------------------------------------------------------
 * Created by Ulysses Carlos on 09/19/2020 at 05:15 PM
 * 
 * Chapter12_02.cc
 * Draw a 100x300 Rectangle and place the text "Howdy!" inside it.
 * -----------------------------------------------------------------------------
 */

#include "GUI/Simple_window.h"
using namespace Graph_lib;
using Simple_Window = Simple_window;

int main(void){
    Simple_Window win{Point{100, 100}, 800, 600, "Chapter12_02"};
    
    Rectangle rect{Point{200, 200}, 100, 30};
    Text text{Point{220, 220}, "Howdy!"};
    text.set_font_size(12);
    
    win.attach(rect);
    win.attach(text);

    win.wait_for_button();

}

