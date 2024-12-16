#pragma once

#include <SFML/Graphics.hpp>

class MainMenu {
private:
    sf::RenderWindow& window;
    sf::Font font;
    sf::Text playText, highScoreText, exitText;
    int selectedItem;

public:
    MainMenu(sf::RenderWindow& window);
    void display();
};
