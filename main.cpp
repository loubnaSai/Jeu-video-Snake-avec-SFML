#include <iostream>
#include <SFML/Graphics.hpp>
#include "Serpent.h"
using namespace std;
void game();

int main()
{
    game();
    return 0;
}


void game(){
   sf::RenderWindow window(sf::VideoMode(600, 600), "Serpent game");
    window.setFramerateLimit(60);
    window.setKeyRepeatEnabled(false);
   serpent s(window);
 while (window.isOpen())
    {
        s.move(window);
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        s.cli(event);

        }

        window.clear(sf::Color(0,162,255));
        s.draw(window);
        window.display();

    }
}
