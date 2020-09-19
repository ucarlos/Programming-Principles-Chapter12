/*
 * -----------------------------------------------------------------------------
 * Created by Ulysses Carlos on 09/19/2020 at 06:04 PM
 * 
 * Chapter12_05.cc
 * Draw a red ¼-inch frame around a rectangle that is three-quarters the
 * height of your screen and two-thirds the width.
 * -----------------------------------------------------------------------------
 */

#include "GUI/Simple_window.h"
using namespace Graph_lib;
using Simple_Window = Simple_window;

const unsigned screen_width = 1280;
const unsigned screen_height = 720;

int main(void){
    Rectangle rect{Point{100, 100}, (int)(.66 * screen_width),
		   (int)(.75 * screen_height)};
    
    Simple_Window win{Point{100, 100}, screen_width, screen_height, "Chapter12_05"};
    rect.set_color(Color::red);
    rect.set_style(Line_style{Line_style::solid, 24});

    win.attach(rect);
    win.wait_for_button();
}
