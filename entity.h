
#include <SFML\Graphics.hpp>
#ifndef __ENTITY_H_INCLUDED__   // if x.h hasn't been included yet...
#define __ENTITY_H_INCLUDED__   //   #define this so the compiler knows it has been included


using namespace std;
class entity
{
public:
	sf::RectangleShape rect;
	sf::Sprite sprite;
	sf::Text text;
	float ms;
	int direction;// 1 = up 2 = down 3 = right 4 = left
	entity();
};
#endif 
