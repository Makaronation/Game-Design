#pragma once
#include "entity.h"
#ifndef __ENEMY_H_INCLUDED__   // if x.h hasn't been included yet...
#define __ENEMY_H_INCLUDED__   //   #define this so the compiler knows it has been included
class enemy : public entity
{
public:
	enemy();
	void update();
	void movement();
	int walking = 0;
	int counter = 0;
};

#endif
