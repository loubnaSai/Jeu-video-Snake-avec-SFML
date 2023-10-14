#include "Fruit.h"
#include "Position.h"

Fruit :: Fruit(){
   mFood.setSize(sf::Vector2f(32, 32));
   mFood.setOutlineColor(sf::Color::Black);
    mFood.setFillColor(sf::Color::Green);
    mFood.setOutlineThickness(1.0f);
    mFood.setPosition(0, 0);
}
void Fruit::draw(sf::RenderWindow &window){
  window.draw(mFood);
}
void Fruit::change_pos(int a,int b){
    rows=a; clos=b;
  mFood.setPosition(a,b);
  position.x=a; position.y=b;
}
Point Fruit::get_pos(){
  return position;
}
