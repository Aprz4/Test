#ifndef HELLOWORLD_HPP
#define HELLOWORLD_HPP

#include <gtkmm.h>
#include <iostream>

class HelloWorld : public Gtk::Window {
public:
    HelloWorld(); 

    void on_button_clicked();

private:
    Gtk::Button button;
};

#endif