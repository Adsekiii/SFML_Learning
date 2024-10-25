//#include <SFML/Graphics.hpp>
//#include <SFML/Window.hpp>
//#include <SFML/System.hpp>
//#include <iostream>
//
////sf::Vector2f moveCharacter(sf::RectangleShape rect1);
//bool detectWhenMouseEnteredPlayer(sf::Vector2f currPlayerPos, sf::Vector2i currMousePos);
//
//int main() {
//
//	sf::VideoMode windowSize(800, 600);
//	sf::String title = "Titel";
//	sf::ContextSettings settings;
//	sf::RenderWindow window(windowSize, title, sf::Style::Default, settings);
//
//	window.setFramerateLimit(240);
//
//	sf::RectangleShape rect1(sf::Vector2f(50.f, 50.f));
//	rect1.setFillColor(sf::Color::Red);
//	rect1.setPosition(sf::Vector2f(200.f, 275.f));
//	sf::RectangleShape rect2(sf::Vector2f(50.f, 50.f));
//	rect2.setFillColor(sf::Color::Blue);
//	rect2.setPosition(sf::Vector2f(250.f, 275.f));
//	sf::RectangleShape rect3(sf::Vector2f(50.f, 50.f));
//	rect3.setFillColor(sf::Color::Green);
//	rect3.setPosition(sf::Vector2f(300.f, 275.f));
//	sf::RectangleShape rect4(sf::Vector2f(50.f, 50.f));
//	rect4.setFillColor(sf::Color::Yellow);
//	rect4.setPosition(sf::Vector2f(350.f, 275.f));
//	sf::RectangleShape rect5(sf::Vector2f(50.f, 50.f));
//	rect5.setFillColor(sf::Color::Magenta);
//	rect5.setPosition(sf::Vector2f(400.f, 275.f));
//	sf::RectangleShape rect6(sf::Vector2f(50.f, 50.f));
//	rect6.setFillColor(sf::Color::Cyan);
//	rect6.setPosition(sf::Vector2f(450.f, 275.f));
//	sf::RectangleShape rect7(sf::Vector2f(50.f, 50.f));
//	rect7.setFillColor(sf::Color::White);
//	rect7.setPosition(sf::Vector2f(500.f, 275.f));
//
//	settings.antialiasingLevel = 8;
//
//	while (window.isOpen()) {
//		sf::Event event;
//		while (window.pollEvent(event))
//		{
//			if (event.type == sf::Event::Closed) {
//				window.close();
//			}
//
//		}
//		//rect1.setPosition(moveCharacter(rect1));
//		if (detectWhenMouseEnteredPlayer(rect1.getPosition(), sf::Mouse::getPosition(window)) && sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
//			rect1.setPosition(sf::Mouse::getPosition(window).x - 25, sf::Mouse::getPosition(window).y - 25);
//		}
//		if (detectWhenMouseEnteredPlayer(rect2.getPosition(), sf::Mouse::getPosition(window)) && sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
//			rect2.setPosition(sf::Mouse::getPosition(window).x - 25, sf::Mouse::getPosition(window).y - 25);
//		}
//		if (detectWhenMouseEnteredPlayer(rect3.getPosition(), sf::Mouse::getPosition(window)) && sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
//			rect3.setPosition(sf::Mouse::getPosition(window).x - 25, sf::Mouse::getPosition(window).y - 25);
//		}
//		if (detectWhenMouseEnteredPlayer(rect4.getPosition(), sf::Mouse::getPosition(window)) && sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
//			rect4.setPosition(sf::Mouse::getPosition(window).x - 25, sf::Mouse::getPosition(window).y - 25);
//		}
//		if (detectWhenMouseEnteredPlayer(rect5.getPosition(), sf::Mouse::getPosition(window)) && sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
//			rect5.setPosition(sf::Mouse::getPosition(window).x - 25, sf::Mouse::getPosition(window).y - 25);
//		}
//		if (detectWhenMouseEnteredPlayer(rect6.getPosition(), sf::Mouse::getPosition(window)) && sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
//			rect6.setPosition(sf::Mouse::getPosition(window).x - 25, sf::Mouse::getPosition(window).y - 25);
//		}
//		if (detectWhenMouseEnteredPlayer(rect7.getPosition(), sf::Mouse::getPosition(window)) && sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
//			rect7.setPosition(sf::Mouse::getPosition(window).x - 25, sf::Mouse::getPosition(window).y - 25);
//		}
//
//
//		window.clear(sf::Color::Black);
//		window.draw(rect1);
//		window.draw(rect2);
//		window.draw(rect3);
//		window.draw(rect4);
//		window.draw(rect5);
//		window.draw(rect6);
//		window.draw(rect7);
//		window.display();
//	}
//
//	return 0;
//}
//
////sf::Vector2f moveCharacter(sf::RectangleShape rect1) {
////	sf::Vector2f currPos = rect1.getPosition();
////	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::W)) {
////		currPos.y -= 1.f;
////		rect1.setPosition(sf::Vector2f(currPos.x, currPos.y));
////	}
////	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::S)) {
////		currPos.y += 1.f;
////		rect1.setPosition(sf::Vector2f(currPos.x, currPos.y));
////	}
////	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::A)) {
////		currPos.x -= 1.f;
////		rect1.setPosition(sf::Vector2f(currPos.x, currPos.y));
////	}
////	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::D)) {
////		currPos.x += 1.f;
////		rect1.setPosition(sf::Vector2f(currPos.x, currPos.y));
////	}
////
////	return currPos;
////}
//
//bool detectWhenMouseEnteredPlayer(sf::Vector2f currPlayerPos, sf::Vector2i currMousePos) {
//
//	if (currMousePos.x < (int)(currPlayerPos.x + 50.f) &&
//		currMousePos.x >(int) (currPlayerPos.x) &&
//		currMousePos.y < (int)(currPlayerPos.y + 50.f) &&
//		currMousePos.y >(int) (currPlayerPos.y)) {
//		return true;
//	}
//	return false;
//}