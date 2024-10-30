//#include <SFML/Graphics.hpp>
//#include <SFML/Window.hpp>
//#include <SFML/System.hpp>
//#include <iostream>
//
//using namespace sf;
//
//VideoMode screenSize(400, 400);
//String title = "asd";
//RenderWindow window(screenSize, title);
//
//
//void drawMap(int map[], int mapX, int mapY) {
//	for (int i = 0; i < mapX; i++) {
//		for (int j = 0; j < mapY; j++) {
//			if (map[j * mapX + i] == 1) {
//				RectangleShape rect;
//				rect.setPosition(Vector2f(i * 20, j * 20));
//				rect.setSize(Vector2f(20, 20));
//				rect.setFillColor(Color::Red);
//				window.draw(rect);
//			}
//			else {
//				RectangleShape rect;
//				rect.setPosition(Vector2f(i * 20, j * 20));
//				rect.setSize(Vector2f(20, 20));
//				rect.setFillColor(Color::White);
//				window.draw(rect);
//			}
//		}
//	}
//}
//
//int main() {
//	int mapX = 20, mapY = 20;
//	int map[400] = {
//	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
//	1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,
//	1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,
//	1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,
//	1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,
//	1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,1,
//	1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,
//	1,0,1,1,1,1,1,0,0,0,0,0,0,0,1,0,0,0,0,1,
//	1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,
//	1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
//	1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
//	1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
//	1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
//	1,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1,
//	1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,
//	1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,
//	1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,
//	1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,
//	1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,
//	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
//	};
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
//		window.clear();
//		drawMap(map, mapX, mapY);
//		window.display();
//
//	}
//
//
//
//	return 0;
//}
