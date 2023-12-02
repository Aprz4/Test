#include "HelloWorld.hpp"
#include <iostream>


HelloWorld::HelloWorld() 
{
    // Configure la fenêtre
    set_title("Hello World");
    set_default_size(200, 200);

    // Crée un bouton avec l'étiquette "Click me!"
    button.set_label("Click me!");

    // Attache la fonction callback au signal clicked du bouton
    button.signal_clicked().connect(sigc::mem_fun(*this, &HelloWorld::on_button_clicked));

    // Ajoute le bouton à la fenêtre
    add(button);

    // Affiche tous les widgets
    show_all_children();
}
void HelloWorld::on_button_clicked() 
{
    // Fonction appelée lorsque le bouton est cliqué
    std::cout << "Hello, GTKmm!" << std::endl;
}
