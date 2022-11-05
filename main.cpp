#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <string>
#include <chrono>
#include <thread>
using namespace std;

int main()
{
	int n = 1;
	//var
	bool deleteSprite = false;
	int l = 5;
	string i = ".png";
	string x;
	x += std::to_string(n);

	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML ");

	sf::Music music;

	if (!music.openFromFile("audio.ogg"))
	{
		cout << "UNLUCKY NO AUDIO!!!!!" << endl;
	}

	music.play();

start:
	x.clear();
	x += std::to_string(n);
	sf::Image image;

	window.clear();

	if (!(image.loadFromFile("frames/" + x + i))) //load image
	{
		cout << "Unlucky! (image wont load)" << endl;
	}

	sf::Texture texture;
	texture.loadFromImage(image); //load texture from image
        
        sf::Sprite sprite;
        sprite.setTexture(texture);

	while (window.isOpen())
	{
		sf::Event event;

	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed) window.close();
	}

	n++;
	window.clear();
	window.draw(sprite);
	window.display();
	std::this_thread::sleep_for(12.5ms);
	goto start;
	}
}
