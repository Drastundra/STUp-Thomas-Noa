#include "Bonus.h"

Bonus::Bonus(Type type, sf::Vector2f position)
    : mType(type), mCollected(false) {
    mShape.setRadius(15);
    mShape.setPosition(position);
    switch (mType) {
    case Type::SpeedBoost:
        mShape.setFillColor(sf::Color::Blue);
        break;
    case Type::Shield:
        mShape.setFillColor(sf::Color::Cyan);
        break;
    case Type::Health:
        mShape.setFillColor(sf::Color::Green);
        break;
    case Type::SlowDown:
        mShape.setFillColor(sf::Color::Yellow);
        break;
    case Type::ScoreMultiplier:
        mShape.setFillColor(sf::Color::Red);
        break;
    }
}

// Constructeur de copie
Bonus::Bonus(const Bonus& other)
    : mType(other.mType), mCollected(other.mCollected) {
    mShape = other.mShape;
}

// Opérateur d'affectation
Bonus& Bonus::operator=(const Bonus& other) {
    if (this != &other) {
        mType = other.mType;
        mCollected = other.mCollected;
        mShape = other.mShape;
    }
    return *this;
}

// Constructeur de déplacement
Bonus::Bonus(Bonus&& other) noexcept
    : mType(other.mType), mCollected(other.mCollected) {
    mShape = std::move(other.mShape);
}

// Opérateur de déplacement
Bonus& Bonus::operator=(Bonus&& other) noexcept {
    if (this != &other) {
        mType = other.mType;
        mCollected = other.mCollected;
        mShape = std::move(other.mShape);
    }
    return *this;
}

void Bonus::update(sf::Time deltaTime) {
    // Optional: Add animation or effects
}

void Bonus::draw(sf::RenderWindow& window) {
    if (!mCollected) {
        window.draw(mShape);
    }
}

void Bonus::applyEffect(Player& player) {
    if (mCollected) return;
    switch (mType) {
    case Type::SpeedBoost:
        player.increaseSpeed();
        break;
    case Type::Shield:
        player.activateShield();
        break;
    case Type::Health:
        player.addHealth();
        break;
    case Type::SlowDown:
        player.decreaseSpeed();
        break;
    case Type::ScoreMultiplier:
        player.activateScoreMultiplier();
        break;
    }
    mCollected = true;
}

bool Bonus::isCollected() const {
    return mCollected;
}

sf::FloatRect Bonus::getBounds() const {
    return mShape.getGlobalBounds();
}
