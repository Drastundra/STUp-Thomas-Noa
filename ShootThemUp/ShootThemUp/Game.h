#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include "Menu.h"
#include "Player.h"
#include "Score.h"
#include "Projectile.h"
#include "Asteroid.h"
#include <random>
#include <chrono>
#include "EnemyShip.h"


class Game {
public:
    Game();
    void run();
private:
    void processEvents();
    void processMenuEvents(const sf::Event& event);
    void processGameplayEvents(const sf::Event& event);
    void processNameEntryEvents(const sf::Event& event);
    void update(sf::Time deltaTime);
    void render();

    sf::RenderWindow mWindow;
    Menu mMenu;
    Player mPlayer;
    bool mIsPlaying;
    bool mIsGameOver;
    bool mIsEnteringName;
    std::string mPlayerName;
    sf::Clock mSurvivalClock;
    std::vector<Score> mHighScores;
    std::vector<Projectile> mProjectiles;
    std::vector<Asteroid> mAsteroids;
    sf::Clock mAsteroidSpawnClock;
    void spawnAsteroid();
    void checkCollisions();
    std::mt19937 mRNG;
    float randomFloat(float min, float max) {
        std::uniform_real_distribution<float> dist(min, max);
        return dist(mRNG);
    }

    int randomInt(int min, int max) {
        std::uniform_int_distribution<int> dist(min, max);
        return dist(mRNG);
    }
    std::vector<EnemyShip> mEnemyShips;
    std::vector<Projectile> mEnemyProjectiles;
    sf::Clock mEnemySpawnClock;
    void spawnEnemyShip();
};