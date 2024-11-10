//#include <iostream>
//
//#include "SFML/Graphics.hpp"
//#include "SFML/Window.hpp"
//#include "SFML/System.hpp"
//#include "SFML/OpenGL.hpp"
//
//
//
//int main()
//{
//	sf::VideoMode windowSize(800, 600);
//	sf::String title = "App";
//	sf::RenderWindow window(windowSize, title);
//
//	std::cout << "Everything works just fine!\n";
//
//	sf::VertexArray triangle(sf::Triangles, 3);
//	triangle[0].position = sf::Vector2f(10.f, 10.f);
//	triangle[1].position = sf::Vector2f(100.f, 10.f);
//	triangle[2].position = sf::Vector2f(100.f, 100.f);
//
//	triangle[0].color = sf::Color::Red;
//	triangle[1].color = sf::Color::Blue;
//	triangle[2].color = sf::Color::Green;
//
//	while (window.isOpen())
//	{
//		sf::Event event;
//
//		while (window.pollEvent(event))
//		{
//			if (event.type == sf::Event::Closed) {
//				window.close();
//			}
//		}
//
//		window.clear();
//		window.draw(triangle);
//		window.display();
//	}
//
//
//
//	return EXIT_SUCCESS;
//}