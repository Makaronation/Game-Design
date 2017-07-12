#include "entity.h"

#ifndef __PLAYER_H_INCLUDED__   // if x.h hasn't been included yet...
#define __PLAYER_H_INCLUDED__   //   #define this so the compiler knows it has been included

class player :
	public entity
{
public:
	player();
	void update();
	void movement();
	int walking = 0;
};
#endif