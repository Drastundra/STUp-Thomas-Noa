#include <SFML/Graphics.hpp>
#include "menu/MainMenu.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Game");
    MainMenu menu(window);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.clear();
        menu.display();
        window.display();
    }

    return 0;
}
