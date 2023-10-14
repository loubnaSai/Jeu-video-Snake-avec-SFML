#include<iostream>
#include <SFML/Graphics.hpp>
#include "Position.h"
using namespace std;
#ifndef  __DIRECTION_H__
#define __DIRECTION_H__
class Direction {
	public:
		Point up;
		Point down;
		Point left;
		Point right;
		Point dir;  //Direction actuelle

	public:
		Point get_direction(int i);
		Point get_dir();
		Point get_zero();
		void setup();
		void setdown();
		void setleft();
		void setright();

};
#endif
