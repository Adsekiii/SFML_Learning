//#include <SFML/System.hpp>
//#include <SFML/Window.hpp>
//#include <SFML/Graphics.hpp>
//#include <iostream>
//#include <vector>
//
//sf::Color changeColor(sf::Color shapeColor);
//
//int main() {
//
//	sf::VideoMode windowSize(800, 600);
//	sf::String title = "Drawable shape";
//	sf::RenderWindow window(windowSize, title);
//
//	sf::Color shapeColor = sf::Color::White;
//
//	std::vector<sf::ConvexShape> shapes;
//	std::vector<sf::Vector2f> points;
//	int pointsAmount = 0;
//	int shapesAmount = 0;
//
//
//	while (window.isOpen()) {
//		sf::Event event;
//		while (window.pollEvent(event)) {
//			if (event.type == sf::Event::Closed) {
//				window.close();
//			}
//		}
//
//		shapeColor = changeColor(shapeColor);
//
//		if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
//			pointsAmount++;
//			points.push_back((sf::Vector2f)sf::Mouse::getPosition(window));
//		}
//		else if (sf::Mouse::isButtonPressed(sf::Mouse::Right)) {
//			if (pointsAmount > 3) {
//
//				shapes.push_back(sf::ConvexShape(pointsAmount));
//				for (int i = 0; i < pointsAmount; i++) {
//					shapes.at(shapesAmount).setPoint(i, sf::Vector2f(points.at(i).x, points.at(i).y));
//				}
//				shapes.at(shapesAmount).setFillColor(shapeColor);
//				shapesAmount++;
//				pointsAmount = 0;
//				points.clear();
//			}
//		}
//
//		window.clear();
//		for (int i = 0; i < shapesAmount; i++) {
//			window.draw(shapes.at(i));
//		}
//		window.display();
//
//	}
//
//	return 0;
//}
//
//sf::Color changeColor(sf::Color shapeColor) {
//
//	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Q)) {
//		return sf::Color::Red;
//	}
//	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::W)) {
//		return sf::Color::Blue;
//	}
//	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::E)) {
//		return sf::Color::Green;
//	}
//	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::R)) {
//		return sf::Color::White;
//	}
//	return shapeColor;
//
//};