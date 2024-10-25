//#include <SFML/System.hpp>
//#include <SFML/Graphics.hpp>
//#include <SFML/Window.hpp>
//
//int main()
//{
//    sf::VideoMode windowSize(800, 600);
//    sf::String title = "Moje okno";
//
//    sf::Window window(windowSize,title);
//    window.setFramerateLimit(120);
//
//    while (window.isOpen()) {
//        sf::Event event;
//        while (window.pollEvent(event)) {
//            switch (event.type)
//            {
//            case sf::Event::LostFocus :
//                title = "LostFocus";
//                window.setTitle(title);
//                break;
//
//            case sf::Event::GainedFocus :
//                title = "GainedFocus";
//                window.setTitle(title);
//                break;
//
//            case sf::Event::Closed:
//                window.close();
//                break;
//            default:
//                break;
//            }
//        }
//    }
//
//    return 0;
//}