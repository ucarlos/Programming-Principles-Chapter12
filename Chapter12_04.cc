/*
 * -----------------------------------------------------------------------------
 * Created by Ulysses Carlos on 09/19/2020 at 05:37 PM
 * 
 * Chapter12_04.cc
 * Draw a 3 by 3 tic-tac-toe board of alternating white and red squares.
 * -----------------------------------------------------------------------------
 */

#include "GUI/Simple_window.h"

using namespace Graph_lib;
using Simple_Window = Simple_window;

int main(void){
    Simple_Window win{Point{0, 0}, 800, 600, "Chapter12_04.cc"};

    // Can't use vector in this case unfortunately
    // vector<Rectangle> vec;
    // for (int i = 0; i < 9; i++){
    // 	Rectangle rec{Point{(1 + i % 3) * 100, ((i / 3) + 1) * 100},
    // 		      100, 100};
    // 	rec.set_color((i % 2) ? Color::red : Color::white);
    // 	vec.push_back(rec);
    // }

    // for (auto &i : vec)
    // 	win.attach(i);

    Rectangle rec1{Point{100, 100}, 100, 100};
    Rectangle rec2{Point{200, 100}, 100, 100};
    Rectangle rec3{Point{300, 100}, 100, 100};
 
    Rectangle rec4{Point{100, 200}, 100, 100};
    Rectangle rec5{Point{200, 200}, 100, 100};
    Rectangle rec6{Point{300, 200}, 100, 100};

    Rectangle rec7{Point{100, 300}, 100, 100};
    Rectangle rec8{Point{200, 300}, 100, 100};
    Rectangle rec9{Point{300, 300}, 100, 100};

    // White Color:
    rec1.set_color(Color::white);
    rec3.set_color(Color::white);
    rec5.set_color(Color::white);
    rec7.set_color(Color::white);
    rec9.set_color(Color::white);
    // Red Color:
    rec2.set_color(Color::red);
    rec4.set_color(Color::red);
    rec6.set_color(Color::red);
    rec8.set_color(Color::red);

    // Now attach:
    win.attach(rec1);
    win.attach(rec2);
    win.attach(rec3);
    win.attach(rec4);
    win.attach(rec5);
    win.attach(rec6);
    win.attach(rec7);
    win.attach(rec8); 
    win.attach(rec9);   
    
    win.wait_for_button();
}
