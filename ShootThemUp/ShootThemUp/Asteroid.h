#pragma once
#include <SFML/Graphics.hpp>

class Asteroid {
public:
    Asteroid(const sf::Vector2f& position, const sf::Vector2f& velocity);
    void update(sf::Time deltaTime);
    void draw(sf::RenderWindow& window) const;
    sf::FloatRect getBounds() const;
    bool isOffscreen() const;

private:
    sf::CircleShape mShape;
    sf::Vector2f mVelocity;
};