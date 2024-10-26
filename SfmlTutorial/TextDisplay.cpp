//#include <SFML/System.hpp>
//#include <SFML/Window.hpp>
//#include <SFML/Graphics.hpp>
//#include <iostream>
//
//int main() {
//
//	sf::VideoMode windowSize(800, 600);
//	sf::String title = "Okno";
//
//	sf::RenderWindow window(windowSize, title);
//
//	sf::Font font;
//	if (!font.loadFromFile("arial.ttf")) {
//		std::cout << "b³¹d";
//	}
//
//	sf::Text text;
//	text.setFont(font);
//	text.setString("Hello World");
//	text.setCharacterSize(24);
//	text.setFillColor(sf::Color::Red);
//	text.setStyle(sf::Text::Bold | sf::Text::Underlined);
//
//	while (window.isOpen()) {
//		sf::Event event;
//
//		while (window.pollEvent(event)) {
//			if (event.type == sf::Event::Closed) {
//				window.close();
//			}
//		}
//
//		window.clear(sf::Color::Black);
//		window.draw(text);
//		window.display();
//	}
//
//	return 0;
//}