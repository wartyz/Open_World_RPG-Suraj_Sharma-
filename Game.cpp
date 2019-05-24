#include "Game.hpp"

//Static functions

//Initializer functions
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
        this->update();
        this->render();
    }
}
