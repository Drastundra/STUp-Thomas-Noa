#include "Enemy.h"

Enemy::Enemy() {
    texture.loadFromFile("assets/enemy.png");
    sprite.setTexture(texture);
    sprite.setPosition(300, 200); // Example position
}

void Enemy::draw(sf::RenderWindow& window) {
    window.draw(sprite);
}
