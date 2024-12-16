#pragma once

#include <SFML/Graphics.hpp>

class Collision {
public:
    static bool AABB(const sf::Sprite& obj1, const sf::Sprite& obj2);
};
