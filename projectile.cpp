#include "projectile.h"



projectile::projectile()
{
	rect.setSize(sf::Vector2f(10, 10));
	rect.setFillColor(sf::Color::Red);
	direction = 2; // 1 = up 2 = down 3 = right 4 = left
	ms = 10;

}

void projectile::update()
{
	if (direction == 1)
	{
		rect.move(0, -ms);
	}

	if (direction == 2)
	{
		rect.move(0, ms);
	}

	if (direction == 3)
	{
		rect.move(ms,0);
	}

	if (direction == 4)
	{
		rect.move(-ms,0);
	}
}