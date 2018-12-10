#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ///okno-kalibracja
    sf::RenderWindow window(sf::VideoMode(600, 600),"Hi, I'm turtle.");
    sf::Texture turt_text;


    ///¿ó³w-kalibracja
    turt_text.loadFromFile("zolw.png");
    sf::Sprite turtle(turt_text);
    turtle.setScale(sf::Vector2f(0.1,0.1));
    turtle.setOrigin(sf::Vector2f(151.2,151.2));
    turtle.setPosition(sf::Vector2f(300,300));


    ///okno-zamykanie
    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)) {
            if(event.type == sf::Event::Closed) {
                window.close();
        }
}
        ///wywo³ywanie startowe
        window.clear(sf::Color::White);
        window.draw(turtle);
        window.display();

        string polecenie;
        cin >> polecenie;
        ///polecenia dla ¿ó³wia
        if(polecenie == "fd") {
            int ile;
            cin >> ile;

            turtle.move(0, -ile);
        }
        if(polecenie == "bk") {
            int ile;
            cin >> ile;

            turtle.move(0, ile);
        }
        if(polecenie == "home") {
            turtle.setRotation(0);
            turtle.setPosition(sf::Vector2f(300,300));
        }
    }
return 0;
}
