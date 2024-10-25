#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <iostream>

int main() {

	sf::VideoMode windowSize(800, 600);
	sf::String title = "Titel";
	sf::ContextSettings settings;
	sf::RenderWindow window(windowSize, title, sf::Style::Default, settings);

	window.setFramerateLimit(240);

	sf::RectangleShape rect1(sf::Vector2f(50.f, 50.f));
	rect1.setFillColor(sf::Color::Red);
	rect1.setPosition(sf::Vector2f(375.f, 275.f));

	settings.antialiasingLevel = 8;

	while (window.isOpen()){
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				window.close();
			}

		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::W)) {
			sf::Vector2f currPos = rect1.getPosition();
			currPos.y -= 1.f;
			rect1.setPosition(sf::Vector2f(currPos.x,currPos.y));
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::S)) {
			sf::Vector2f currPos = rect1.getPosition();
			currPos.y += 1.f;
			rect1.setPosition(sf::Vector2f(currPos.x, currPos.y));
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::A)) {
			sf::Vector2f currPos = rect1.getPosition();
			currPos.x -= 1.f;
			rect1.setPosition(sf::Vector2f(currPos.x, currPos.y));
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::D)) {
			sf::Vector2f currPos = rect1.getPosition();
			currPos.x += 1.f;
			rect1.setPosition(sf::Vector2f(currPos.x, currPos.y));
		}

		window.clear(sf::Color::Black);
		window.draw(rect1);
		window.display();
	}

	return 0;
}


