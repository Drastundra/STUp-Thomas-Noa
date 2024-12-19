#include "MovementSettings.h"

MovementSettings::MovementSettings()
    : mMaxSpeed(20.0f), mTurnSpeed(5.0f), mFriction(0.98f) {}

float MovementSettings::getMaxSpeed() const {
    return mMaxSpeed;
}

float MovementSettings::getTurnSpeed() const {
    return mTurnSpeed;
}

float MovementSettings::getFriction() const {
    return mFriction;
}
