#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"

class Bonus {
public:
    enum class Type {
        SpeedBoost,
        Shield,
        Health,
        SlowDown,
        ScoreMultiplier
    };

    // Constructeur par défaut (si nécessaire)
    Bonus() = default;

    // Constructeur principal
    Bonus(Type type, sf::Vector2f position);

    // Destructeur virtuel (bonne pratique)
    virtual ~Bonus() = default;

    // Constructeur de copie
    Bonus(const Bonus& other);

    // Opérateur d'affectation de copie
    Bonus& operator=(const Bonus& other);

    // Constructeur de déplacement
    Bonus(Bonus&& other) noexcept;

    // Opérateur d'affectation de déplacement
    Bonus& operator=(Bonus&& other) noexcept;

    // Méthodes de la classe
    void update(sf::Time deltaTime);
    void draw(sf::RenderWindow& window);
    void applyEffect(Player& player);
    bool isCollected() const;
    sf::FloatRect getBounds() const;

private:
    sf::CircleShape mShape;
    Type mType;
    bool mCollected;
};