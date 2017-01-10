#include "entity.h"

class player : public entity
{
public:
	int ms = 0;
	int atkdmg = 0;
	int walking = 0;
	player();	
	void update();
	void updateMovement();
};
