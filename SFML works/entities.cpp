#include <SFML\Graphics.hpp>
#include <SFML\Window.hpp>
#include <iostream>

using namespace std;

int main(void)
{
	//Variables
	
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

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			player.setTextureRect(sf::IntRect(walking * 32, 32 * 3, 32, 32));
			player.move(0, -4);
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			player.setTextureRect(sf::IntRect(walking * 32, 32, 32, 32));
			player.move(-4, 0);
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			player.setTextureRect(sf::IntRect(walking * 32, 32 * 2, 32, 32));
			player.move(4, 0);
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			player.setTextureRect(sf::IntRect(walking * 32, 0, 32, 32));
			player.move(0, 4);
		}

		walking++;

		if (walking == 3)
		{
			walking = 0;
		}




		window.clear();
		window.draw(player);
		window.display();
	}
	return 0;
}