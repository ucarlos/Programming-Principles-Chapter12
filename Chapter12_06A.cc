/*
 * -----------------------------------------------------------------------------
 * Created by Ulysses Carlos on 09/19/2020 at 06:16 PM
 * 
 * Chapter12_06A.cc
 * What happens when you draw a shape that doesn't fit inside its window?
 * What happens when you draw a window that doesn't fit on your screen?
 * Write two programs that illustrate these two phenomena.
 * 
 * Solution:
 * Only parts of the shape that are in the dimensions of the window are drawn
 * on the window. The rest is ignored.
 * -----------------------------------------------------------------------------
 */

#include "GUI/Simple_window.h"
using namespace Graph_lib;
using Simple_Window = Simple_window;

int main(void){
    Simple_Window win1{Point{100, 100}, 640, 480, "Chapter12_06A"};
    Rectangle rec1{Point{200, 200}, 800, 800};
    win1.attach(rec1);

    win1.wait_for_button();

}
