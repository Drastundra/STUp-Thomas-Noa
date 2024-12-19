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

    // Constructeur par d�faut (si n�cessaire)
    Bonus() = default;

    // Constructeur principal
    Bonus(Type type, sf::Vector2f position);

    // Destructeur virtuel (bonne pratique)
    virtual ~Bonus() = default;

    // Constructeur de copie
    Bonus(const Bonus& other);

    // Op�rateur d'affectation de copie
    Bonus& operator=(const Bonus& other);

    // Constructeur de d�placement
    Bonus(Bonus&& other) noexcept;

    // Op�rateur d'affectation de d�placement
    Bonus& operator=(Bonus&& other) noexcept;

    // M�thodes de la classe
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