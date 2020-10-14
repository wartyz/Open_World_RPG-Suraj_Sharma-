#include "Game.hpp"

//Funciones Static

//Funciones de inicialización
void Game::initWindow()
{
    /* Crea una ventana SFML usando opciones de un fichero window.ini */
    this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "C++ SFML RPG");
}
//Constructors/Destructors

Game::Game()
{
    this->initWindow();
}


Game::~Game()
{
    delete this->window;
}

// Funciones
void Game::updateSFMLEvents()
{
    while (this->window->pollEvent(this->sfEvent))
    {
        if (this->sfEvent.type == sf::Event::Closed)
        {
            this->window->close();
        }
    }
}

void Game::update()
{
    this->updateSFMLEvents();


}

void Game::render()
{
    this->window->clear();

    //Render items
    this->window->display();
}

void Game::run()
{
    while (this->window->isOpen())
    {

        this->updateDt();
        this->update();
        this->render();
    }
}

void Game::updateDt()
{
    /*Actualiza la variable dt con el tiempo que toma hacer update y render en un frame*/
    this->dt = this->dtClock.restart().asSeconds();


}
