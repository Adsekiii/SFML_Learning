//#include <SFML/System.hpp>
//#include <SFML/Window.hpp>
//#include <SFML/Graphics.hpp>
//#include <iostream>
//
//using namespace sf;
//
//int main() {
//
//	VideoMode windowSize(800, 600);
//	String title = "Textured Player";
//	ContextSettings settings;
//	settings.antialiasingLevel = 4;
//
//	RenderWindow window(windowSize, title, Style::Default, settings);
//
//	Texture playerTexture;
//	if (!playerTexture.loadFromFile("player.png")) {
//		std::cout << "No such file";
//	}
//	playerTexture.setSmooth(true);
//
//	Sprite player;
//	player.setTexture(playerTexture);
//	player.setOrigin(Vector2f(25.f, 25.f));
//	player.setPosition(Vector2f(25, 25));
//	player.setScale(Vector2f(1.f, 1.f));
//
//
//	while (window.isOpen()) {
//		Event event;
//
//		while (window.pollEvent(event)) {
//			if (event.type == Event::Closed) {
//				window.close();
//			}
//		}
//
//		if (Mouse::getPosition(window).y < player.getOrigin().y + 25.f &&
//			Mouse::getPosition(window).y > player.getOrigin().y - 25.f &&
//			Mouse::getPosition(window).x < player.getOrigin().x + 25.f &&
//			Mouse::getPosition(window).x > player.getOrigin().x - 25.f) {
//			std::cout << "player";
//		}
//
//		window.clear();
//		window.draw(player);
//		window.display();
//
//	}
//
//
//	return 0;
//}
