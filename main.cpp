// Let's start fresh shall we?
#include <iostream>
#include <SFML\Window.hpp>
#include <SFML\Graphics.hpp>
//class
#include "player.h"
#include "projectile.h"
#include "enemy.h"
#include "random.h"

using namespace std;


int main(void)
{
	int counter = 0;
	int counter2 = 0;
	int counter3 = 0;

	sf::RenderWindow window(sf::VideoMode(800, 600), "My window", sf::Style::Default);
	window.setFramerateLimit(60);
	sf::Texture texture;
	if (!texture.loadFromFile("walking.png"))
	{
		return -1;
	}
	sf::Texture texture_enemy;
	if (!texture_enemy.loadFromFile("enemies.jpg"))
	{
		return -1;
	}

	//class
	class player player1;
	class projectile proj1;
	class enemy enemy1;
	//Load enemy & player texture
	enemy1.sprite.setTexture(texture_enemy);
	enemy1.sprite.setTextureRect(sf::IntRect(0, 0, 30, 30));

	player1.sprite.setTexture(texture);


	// Projectile vector array
	vector<projectile> projectileArray;
	//Enemy vector array
	vector <enemy> enemyArray;
	// Place enemy



	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		window.clear();
		//class

		//
		// Fire Missile
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
		{
			proj1.rect.setPosition(player1.rect.getPosition());
			proj1.direction = player1.direction;
			projectileArray.push_back(proj1);

		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::N))
		{
			enemy1.rect.setPosition(static_cast<int>(randnum(window.getSize().x)), static_cast<int>(randnum(window.getSize().y)));
			enemyArray.push_back(enemy1);
		}

		//Draw projectiles

		for (int i = 0; i < projectileArray.size(); i++)
		{
			projectileArray[i].update();
			window.draw(projectileArray[i].rect);
		}
		for (int i = 0; i < enemyArray.size(); i++)
		{
			enemyArray[i].update();
			enemyArray[i].movement();
			//window.draw(enemyArray[i].rect);
			window.draw(enemyArray[i].sprite);
		}
		//
		//
		player1.movement();
		player1.update();


		window.draw(player1.sprite);
		//
		window.display();

	}

}