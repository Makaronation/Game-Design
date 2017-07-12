#include "enemy.h"
#include "random.h"


enemy::enemy()
{
	rect.setSize(sf::Vector2f(40, 40));
	rect.setFillColor(sf::Color::Red);
	ms = 2;
	walking = 0;
}

void enemy::update()
{
	sprite.setPosition(rect.getPosition());
}

void enemy::movement()
{
	if (walking > 1)
	{
		walking = 0;
	}
	if (direction == 1)
	{
		rect.move(0, -ms);
		sprite.setTextureRect(sf::IntRect(30*2,walking*30, 30, 30));
		walking++;
	}

	else if (direction == 2)
	{
		rect.move(0, ms);
		sprite.setTextureRect(sf::IntRect(0, walking*30, 30, 30));
		walking++;
	}

	else if (direction == 3)
	{
		rect.move(ms, 0);
		sprite.setTextureRect(sf::IntRect(30*3, walking*30, 30, 30));
		walking++;
	}

	else if (direction == 4)
	{
		rect.move(-ms, 0);
		sprite.setTextureRect(sf::IntRect(30, walking*30, 30, 30));
		walking++;
	}
	else
	{
		//No movement
	}
	counter++;
	if (counter >= 50)
	{
		direction = randnum(10);
		counter = 0;
	}

}