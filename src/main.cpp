#include <iostream>
#include "HelloWorld.hpp"



int main(int argc, char* argv[]) {
    // Initialise l'application GTK
    auto app = Gtk::Application::create(argc, argv, "org.gtkmm.examples.base");

    // Crée la fenêtre principale
    HelloWorld hello_world;

    // Exécute l'application
    return app->run(hello_world, argc, argv);
}

