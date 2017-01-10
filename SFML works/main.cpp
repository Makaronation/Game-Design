#include <SFML\Graphics.hpp>
#include <SFML\Window.hpp>
#include <iostream>
// class 
#include "player.h"
#include "entity.h"
//end of class

using namespace std;

int main(void)
{
	//Menu

	//Counter
	int walking = 0;
	sf::RenderWindow window(sf::VideoMode(800, 600), "Animation Test", sf::Style::Default);
	window.setFramerateLimit(60);
	sf::Texture texture_player;

	
	if (!texture_player.loadFromFile("walking.png"))
	{
		cout << "Failed to load..." << endl;
	}

	sf::Sprite player;
	player.setTexture(texture_player);
	player.setPosition(400, 300);
	player.setTextureRect(sf::IntRect(1 * 32, 0, 32, 32));
	sf::Event evnt;


	//Class

	class player player1;
	player1.sprite.setTexture(texture_player);

	//end of class

	while (window.isOpen())
	{
		while (window.pollEvent(evnt))
		{
			switch(evnt.type)
			{
				case sf::Event::Closed:
					window.close();
			}

		}

		window.clear();
		/*
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			player.setTextureRect(sf::IntRect(walking * 32, 32 * 3, 32, 32));
			player.move(0, -4);
		}

		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			player.setTextureRect(sf::IntRect(walking * 32, 32, 32, 32));
			player.move(-4, 0);
		}

		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			player.setTextureRect(sf::IntRect(walking * 32, 32 * 2, 32, 32));
			player.move(4, 0);
		}

		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			player.setTextureRect(sf::IntRect(walking * 32, 0, 32, 32));
			player.move(0, 4);
		}

		walking++;

		if (walking == 3)
		{
			walking = 0;
		}
		*/

		player1.update();
		player1.updateMovement;
		window.clear();
		window.draw(player1.sprite);
		window.display();
	}
	return 0;
}