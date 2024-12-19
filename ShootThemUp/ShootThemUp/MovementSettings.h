#pragma once

class MovementSettings {
public:
    // Constructeur avec des valeurs par défaut
    MovementSettings();

    // Accesseurs pour les valeurs
    float getMaxSpeed() const;
    float getTurnSpeed() const;
    float getFriction() const;

private:
    float mMaxSpeed;    // Vitesse maximale du joueur
    float mTurnSpeed;   // Vitesse de rotation du joueur
    float mFriction;    // Friction pour ralentir le mouvement
};