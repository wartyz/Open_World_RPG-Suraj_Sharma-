//Toolchain H:\mingw-w64\x86_64-7.2.0-posix-seh-rt_v5-rev1\mingw64
#include<iostream>
#include"SFML\Graphics.hpp"
#include"SFML\Window.hpp"
#include"SFML\System.hpp"
#include<math.h>
#include<vector>
#include<cstdlib>

//LENGTH OF VECTOR: |V| = sqrt(V.x^2 + V.y^2)
//NORMALIZE VECTOR: U = V / |V|

using namespace sf;


int main()
{
    RenderWindow window(VideoMode(800, 600), "C++ SFML works!");
    CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    window.setFramerateLimit(60);

//    Font font;
//    if (!font.loadFromFile("../Fonts/Urban Elegance Regular.ttf"))
//        throw ("COULD NOT LOAD FONT!");
//
//    Text text;
//    text.setFont(font);
//    text.setCharacterSize(24);
//    text.setColor(Color::Red);
//    text.setStyle(Text::Bold);
//    text.setString("HEY  IA AM STRING OF TEXT IN SFML BRAH!");
//    text.setPosition(10.f, window.getSize().y / 2);


    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

//        //Update
//        text.move(5.f, 0.f);
//
//        if (text.getPosition().x > window.getSize().x)
//            text.setPosition(0.f, text.getPosition().y);
//        //Vectors


        //Draw
        window.clear();

        window.draw(shape);

        window.display();
    }

    return 0;
}