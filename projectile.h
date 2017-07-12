#pragma once
#include "entity.h"
#include "player.h"
#ifndef __PROJECTILE_H_INCLUDED__   // if x.h hasn't been included yet...
#define __PROJECTILE_H_INCLUDED__   //   #define this so the compiler knows it has been included

class projectile :
	public entity
{
public:
	int attackdamage = 0;
	projectile();
	void update();
};
#endif