#include "Player.h"

Player::Player() : speed(200.0f) {
    texture.loadFromFile("assets/player.png");
    sprite.setTexture(texture);
    sprite.setPosition(400, 300);
}

void Player::move(const sf::Vector2f& direction) {
    sprite.move(direction * speed * 0.016f); // Assuming 60 FPS
}

void Player::draw(sf::RenderWindow& window) {
    window.draw(sprite);
}
