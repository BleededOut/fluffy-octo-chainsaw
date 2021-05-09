#include "headers.h"

int main()
{
    // Create a window - width, height, label (=title)
    Fl_Window *wind = new Fl_Window(400, 400,"FLTK Tutorial - Example 1");
    // Display the window
    wind->begin ();
        Fl_Button *ok = new Fl_Button(10, 10, 100, 50, "OMFG");

    wind->show();
    // Run and return
    return Fl::run();
} 