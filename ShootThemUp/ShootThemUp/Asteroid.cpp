#include "Asteroid.h"

Asteroid::Asteroid(const sf::Vector2f& position, const sf::Vector2f& velocity)
    : mVelocity(velocity)
{
    float radius = 20.0f; // Taille de l'astéroïde
    mShape.setRadius(radius);
    mShape.setFillColor(sf::Color(169, 169, 169)); // Gris
    mShape.setPosition(position);
    // Centre l'origine de l'astéroïde
    mShape.setOrigin(radius, radius);
}

void Asteroid::update(sf::Time deltaTime) {
    mShape.move(mVelocity * deltaTime.asSeconds());
}

void Asteroid::draw(sf::RenderWindow& window) const {
    window.draw(mShape);
}

sf::FloatRect Asteroid::getBounds() const {
    return mShape.getGlobalBounds();
}

bool Asteroid::isOffscreen() const {
    sf::Vector2f pos = mShape.getPosition();
    return (pos.x < -50 || pos.x > 1550 || pos.y < -50 || pos.y > 1050);
}