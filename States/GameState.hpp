#pragma once

#include "../State.hpp"

class GameState : public State
{
public:
    GameState(sf::RenderWindow *window);

    virtual ~GameState();


    //Funciones
    void endState();

    void update(const float &dt);

    void render(sf::RenderTarget *target = nullptr);

};



