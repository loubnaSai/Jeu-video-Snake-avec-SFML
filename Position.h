#include<iostream>
#include <SFML/Graphics.hpp>
#ifndef  __POSITION_H__
#define __POSITION_H__
using namespace std;


typedef struct point{
	int x,y;
}Point;

class Position {
	public:
		Point pos;
	private:
	   Position add(Position a,Position b); //addition de deux positions
	   Position sub(Position a,Position b);//soustraction de deux position
	public:
    point get_pos();
    void setPos(int a,int b);
};
#endif

