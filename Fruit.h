#include<iostream>
#include <SFML/Graphics.hpp>
#include "Position.h"
#ifndef  __FRUIT_H__
#define __FRUIT_H__
using namespace std;

class Fruit {
	public:
	    Fruit();
        Point position;
		sf::RectangleShape mFood;
		int rows;
		int clos;
	public:
	    void draw(sf::RenderWindow &window);
		void change_pos(int,int);
		Point get_pos();

};
#endif

