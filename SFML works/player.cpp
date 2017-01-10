#include "player.h"
#include "entity.h"
#include<SFML\Graphics.hpp>

player::player()
{
	rect.setSize(sf::Vector2f(50, 50));
	rect.setFillColor(sf::Color::Blue);
	rect.setPosition(400, 300);
}

void player::update()
{
	sprite.setPosition(rect.getPosition());
}

void player::updateMovement()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		sprite.setTextureRect(sf::IntRect(walking * 32, 32 * 3, 32, 32));
		rect.move(0, -4);
	}

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		sprite.setTextureRect(sf::IntRect(walking * 32, 32, 32, 32));
		rect.move(-4, 0);
	}

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		sprite.setTextureRect(sf::IntRect(walking * 32, 32 * 2, 32, 32));
		rect.move(4, 0);
	}

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		sprite.setTextureRect(sf::IntRect(walking * 32, 0, 32, 32));
		rect.move(0, 4);
	}

	walking++;

	if (walking == 3)
	{
		walking = 0;
	}
}