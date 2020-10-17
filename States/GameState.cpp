#include "GameState.hpp"

GameState::GameState(sf::RenderWindow *window)
    : State(window)
{}

GameState::~GameState()
{

}

void GameState::endState()
{
    std::cout << "Finalizando GameSate" << "\n";
}

void GameState::updateKeybinds(const float &dt)
{
    this->checkForQuit();
}

void GameState::update(const float &dt)
{
    this->updateKeybinds(dt);

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        std::cout << "A" << "\n";
}

void GameState::render(sf::RenderTarget *target)
{

}



