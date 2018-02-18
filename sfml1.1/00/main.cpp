#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({800, 600}), "traffic light");

    window.clear();

    sf::RectangleShape shape1;
    shape1.setSize({115, 335});
    shape1.setPosition({190, 110});
    shape1.setFillColor(sf::Color(100, 100, 100));
    window.draw(shape1);

    sf::CircleShape shape2(45);
    shape2.setPosition({205, 125});
    shape2.setFillColor(sf::Color(0, 60, 0));
    window.draw(shape2);

    sf::CircleShape shape3(45);
    shape3.setPosition({205, 235});
    shape3.setFillColor(sf::Color(255, 255, 0));
    window.draw(shape3);

    sf::CircleShape shape4(45);
    shape4.setPosition({205, 345});
    shape4.setFillColor(sf::Color(255, 0, 0));
    window.draw(shape4);

    window.display();

    sf::sleep(sf::seconds(10));
}
