#include "Collision.h"

bool Collision::AABB(const sf::Sprite& obj1, const sf::Sprite& obj2) {
    return obj1.getGlobalBounds().intersects(obj2.getGlobalBounds());
}
