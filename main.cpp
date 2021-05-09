#include "headers.h"

struct point
{
    int x;
    int y;
    point(int xx, int yy)
    {
        x = xx;
        y = yy;
    }
};


void draw (point p)
{
    fl_draw_box(FL_FLAT_BOX, p.x, p.y, 1, 1, FL_WHITE);
}

int main()
{
    point p1(0, 0), p2(600, 0), p3(300, 322);
    // Create a window - width, height, label (=title)
    Fl_Window *wind = new Fl_Window(800, 600,"Fractal");
    wind->color(FL_RED);
    
    // here we add children to window class
    wind->begin ();
        Fl_Button *ok = new Fl_Button(10, 10, 100, 50, "OMFG");
        ok->color(FL_BLUE);
    wind->end();
    //draw(p2);
    fl_draw_box(FL_FLAT_BOX, 100, 100, 1, 1, FL_BLACK);
    //for (int i = 0; i < 10000; ++i){
    //    wind->show();
    //}
    // Display the window
    std::cout << p1.x << ' ' << p1.y;
    wind->show();
    // Run and return
    return Fl::run();
} 