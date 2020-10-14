#pragma once

#include "State.hpp"

class Game
{
private:
    //Variables
    sf::RenderWindow *window;
    sf::Event sfEvent;

    sf::Clock dtClock;
    float dt; //Delta Time

    //Initializacion
    void initWindow();

public:
    //Constructores/Destructores
    Game();

    virtual ~Game();

    //Funciones
    void updateDt();

    void updateSFMLEvents();

    void update();

    void render();

    void run();
};



