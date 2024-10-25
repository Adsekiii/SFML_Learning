#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <iostream>

int main() {

	sf::VideoMode windowSize(800, 600);
	sf::String title = "TextInput";
	std::string text = "";

	sf::Window window(windowSize, title);

	window.setVerticalSyncEnabled(true);


	bool wasPressed = false;

	while (window.isOpen()) {

		sf::Event event;
		while (window.pollEvent(event)) {

			if (event.type == sf::Event::TextEntered)
			{
				if (event.text.unicode < 128)
					text += static_cast<char>(event.text.unicode);
			}

			if (event.type == sf::Event::KeyPressed) {
				if (event.key.scancode == sf::Keyboard::Scan::Enter) {
					std::cout << text << std::endl;
					text = "";
				}
			}

			if (event.type == sf::Event::Closed) {
				window.close();
			}

		}

	}

	return 0;
}


