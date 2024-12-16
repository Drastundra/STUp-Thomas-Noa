#include "MainMenu.h"

MainMenu::MainMenu(sf::RenderWindow& window) : window(window), selectedItem(0) {
    font.loadFromFile("assets/font.ttf");

    playText.setFont(font);
    playText.setString("Play");
    playText.setCharacterSize(30);
    playText.setPosition(300, 200);

    highScoreText.setFont(font);
    highScoreText.setString("High Scores");
    highScoreText.setCharacterSize(30);
    highScoreText.setPosition(300, 300);

    exitText.setFont(font);
    exitText.setString("Exit");
    exitText.setCharacterSize(30);
    exitText.setPosition(300, 400);
}

void MainMenu::display() {
    window.draw(playText);
    window.draw(highScoreText);
    window.draw(exitText);
}
