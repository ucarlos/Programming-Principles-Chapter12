#include "GUI/Simple_window.h"

int main(void){
    Point fl{100, 100};
    Simple_window w{fl, 600, 400, "My Window..."};
    w.wait_for_button();
}
