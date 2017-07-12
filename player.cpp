#include "player.h"

player::player()
{
	rect.setSize(sf::Vector2f(50, 50));
	rect.setFillColor(sf::Color::Blue);
	rect.setPosition(400, 300);
	sprite.setTextureRect(sf::IntRect(32, 0, 32, 32));
	direction = 2;
	ms = 5;
}
void player::update()
{
	sprite.setPosition(rect.getPosition());
}

void player::movement()
{
	if (walking > 2)
	{
		walking = 0;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		sprite.setTextureRect(sf::IntRect(32 * walking, 32 * 3, 32, 32));
		rect.move(0, -ms);
		walking++;
		direction = 1;
	}

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{

		sprite.setTextureRect(sf::IntRect(32 * walking, 0, 32, 32));
		rect.move(0, ms);
		walking++;
		direction = 2;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		sprite.setTextureRect(sf::IntRect(32 * walking, 32 * 2, 32, 32));
		rect.move(ms, 0);
		walking++;
		direction = 3;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{

		sprite.setTextureRect(sf::IntRect(32 * walking, 32, 32, 32));
		rect.move(-ms, 0);
		walking++;
		direction = 4;
	}
}