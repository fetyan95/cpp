#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({400, 300}), "Name and Surname");

    window.clear();

    sf::RectangleShape shape1;
    shape1.setSize({60, 3});
    shape1.setRotation(90);
    shape1.setPosition({50, 50});
    window.draw(shape1);

    sf::RectangleShape shape2;
    shape2.setSize({30, 3});
    shape2.setRotation(0);
    shape2.setPosition({50, 50});
    window.draw(shape2);

    sf::RectangleShape shape3;
    shape3.setSize({30, 3});
    shape3.setRotation(0);
    shape3.setPosition({50, 80});
    window.draw(shape3);

    sf::RectangleShape shape4;
    shape4.setSize({30, 3});
    shape4.setRotation(45);
    shape4.setPosition({90, 50});
    window.draw(shape4);

    sf::RectangleShape shape5;
    shape5.setSize({30, 3});
    shape5.setRotation(135);
    shape5.setPosition({132, 51});
    window.draw(shape5);

    sf::RectangleShape shape6;
    shape6.setSize({40, 3});
    shape6.setRotation(90);
    shape6.setPosition({110, 70});
    window.draw(shape6);

    sf::RectangleShape shape7;
    shape7.setSize({60, 3});
    shape7.setRotation(90);
    shape7.setPosition({140, 50});
    window.draw(shape7);

    sf::RectangleShape shape8;
    shape8.setSize({30, 3});
    shape8.setRotation(0);
    shape8.setPosition({140, 50});
    window.draw(shape8);

    sf::RectangleShape shape9;
    shape9.setSize({30, 3});
    shape9.setRotation(0);
    shape9.setPosition({140, 80});
    window.draw(shape9);

    window.display();

    sf::sleep(sf::seconds(15));
}
