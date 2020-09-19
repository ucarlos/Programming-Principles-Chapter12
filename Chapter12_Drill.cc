/*
 * -----------------------------------------------------------------------------
 * Created by Ulysses Carlos on 09/14/2020 at 09:49 PM
 * 
 * Chapter12_Drill.cc
 * God, it was horrible to get this all setup
 * -----------------------------------------------------------------------------
 */

#include "GUI/Simple_window.h"
using namespace Graph_lib;

const unsigned width = 854;
const unsigned height = 480;

using Simple_Window = Simple_window;
void initial_test(void){
    
    Point fl{100, 100};
    Point fll{200, 200};
    Simple_window w{fl, 854, 400, "My Window... Okase"};
    Text l{Point{150, 150}, "Help me PLEASE"};
    Polygon poly;
    
    poly.add(Point{300, 200});
    poly.add(Point{350, 100});
    poly.add(Point{400, 200});
    
    poly.set_color(Color::red);
    poly.set_style(Line_style::dash);
    w.attach(poly);
    // w.attach(l);
    w.wait_for_button();
}

int main(void){
    
    Point top_left{100, 100};
    Point p1{100, 200};
    Circle c{p1, 50};
    Ellipse e{p1, 75, 25};
    e.set_color(Color::dark_red);
    Mark m{p1, 'x'};
    Simple_Window win{top_left, width, height, "JESUS CHRIST I LOVE YOU"};
    
    ostringstream oss;
    oss << "Screen Size: " << x_max() << " * " << y_max()
	<< "; Window Size: " << win.x_max() << " * " << win.y_max();

    Text sizes{p1, oss.str()};
    
    Image cal{Point{255, 255}, "snow_cpp.gif"};
    Image cal2{Point{500, 100}, "anime.jpg"};
    cal.set_mask(Point{40, 40}, 200, 150);


    win.attach(c);
    win.attach(m);
    win.attach(e);

    win.attach(sizes);
    win.attach(cal);
    win.attach(cal2);
    win.set_label("Canvas #12");

    win.wait_for_button();



}
