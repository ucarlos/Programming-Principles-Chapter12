/*
 * -----------------------------------------------------------------------------
 * Created by Ulysses Carlos on 09/19/2020 at 06:16 PM
 * 
 * Chapter12_06B.cc
 * What happens when you draw a shape that doesn't fit inside its window?
 * What happens when you draw a window that doesn't fit on your screen?
 * Write two programs that illustrate these two phenomena.
 * 
 * What happens when you draw a window that doesn't fit on your screen?
 * Solution: The Window instead has the size of your current screen. So if
 * you have a 1080p monitor and make a 1440p window, then it will shrink to
 * your 1080p screen.
 * -----------------------------------------------------------------------------
 */

#include "GUI/Simple_window.h"
using namespace Graph_lib;
using Simple_Window = Simple_window;

const unsigned screen_width = 2560;
const unsigned screen_height = 1440;

int main(void){
    Simple_Window win1{Point{100, 100}, screen_width,
		       screen_height, "Chapter12_06B"};
    
    Rectangle rec1{Point{200, 200}, 800, 800};
    win1.attach(rec1);

    win1.wait_for_button();

}
