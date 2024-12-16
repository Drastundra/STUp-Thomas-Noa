#pragma once

#include <SFML/Graphics.hpp>

class Player {
private:
    sf::Sprite sprite;
    sf::Texture texture;
    float speed;

public:
    Player();
    void move(const sf::Vector2f& direction);
    void draw(sf::RenderWindow& window);
};