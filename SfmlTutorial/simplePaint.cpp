//#include <SFML/Graphics.hpp>
//#include <SFML/Window.hpp>
//#include <SFML/System.hpp>
//#include <iostream>
//#include <vector>
//
//int main() {
//	sf::VideoMode screenSize(400, 400);
//	sf::RenderWindow window(screenSize, "shjdsf");
//	sf::Color penColor(sf::Color::White);
//
//	window.setFramerateLimit(120);
//
//	std::vector<sf::Vector2f> itemsPos;
//	std::vector<sf::Color> itemColor;
//	int items = 0;
//
//	while (window.isOpen()) {
//		sf::Event event;
//
//		while (window.pollEvent(event)) {
//			if (event.type == sf::Event::Closed) {
//				window.close();
//			}
//
//			if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
//				itemsPos.push_back(sf::Vector2f(sf::Mouse::getPosition(window).x - 5, sf::Mouse::getPosition(window).y - 5));
//				itemColor.push_back(sf::Color::White);
//				items++;
//			}
//			if (sf::Mouse::isButtonPressed(sf::Mouse::Right)) {
//				itemsPos.push_back(sf::Vector2f(sf::Mouse::getPosition(window).x - 5, sf::Mouse::getPosition(window).y - 5));
//				itemColor.push_back(sf::Color::Black);
//				items++;
//			}
//
//		}
//
//		std::cout << items << "\n";
//
//		window.clear();
//		for (int i = 0; i < itemsPos.size(); i++) {
//
//			sf::CircleShape circle;
//			circle.setPosition(itemsPos.at(i));
//			circle.setRadius(10);
//			circle.setFillColor(itemColor.at(i));
//			window.draw(circle);
//		}
//		window.display();
//	}
//
//	return 0;
//}
