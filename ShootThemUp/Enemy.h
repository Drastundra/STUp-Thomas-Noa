#pragma once

#include <SFML/Graphics.hpp>

class Enemy {
private:
    sf::Sprite sprite;
    sf::Texture texture;

public:
    Enemy();
    void draw(sf::RenderWindow& window);
};
