#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

using namespace sf;

int main()
{
    RenderWindow window(VideoMode({800, 600}), "Home");
    window.clear();

    RectangleShape shape1;
    shape1.setSize({230, 120});
    shape1.setPosition({250, 200});
    shape1.setFillColor(Color(80, 40, 5));
    window.draw(shape1);

    RectangleShape shape2;
    shape2.setSize({40, 80});
    shape2.setPosition({270, 240});
    shape2.setFillColor(Color(15, 15, 15));
    window.draw(shape2);

    ConvexShape trapeze;
    trapeze.setPosition({370, 180});
    trapeze.setFillColor(Color(80, 5, 5));
    trapeze.setPointCount(4);
    trapeze.setPoint(0, {50, -40});
    trapeze.setPoint(1, {-60, -40});
    trapeze.setPoint(2, {-150, 20});
    trapeze.setPoint(3, {140, 20});
    window.draw(trapeze);

    RectangleShape shape3;
    shape3.setSize({20, 30});
    shape3.setPosition({390, 130});
    shape3.setFillColor(Color(40, 40, 40));
    window.draw(shape3);

    CircleShape shape4(10);
    shape4.setPosition({395, 92});
    shape4.setFillColor(Color(100, 100, 100));
    window.draw(shape4);

    RectangleShape shape5;
    shape5.setSize({40, 20});
    shape5.setPosition({380, 110});
    shape5.setFillColor(Color(40, 40, 40));
    window.draw(shape5);

    CircleShape shape6(10);
    shape6.setPosition({401, 80});
    shape6.setFillColor(Color(100, 100, 100));
    window.draw(shape6);

    CircleShape shape7(12);
    shape7.setPosition({405, 65});
    shape7.setFillColor(Color(100, 100, 100));
    window.draw(shape7);

    CircleShape shape8(12);
    shape8.setPosition({412, 50});
    shape8.setFillColor(Color(100, 100, 100));
    window.draw(shape8);

    window.display();

    sleep(seconds(10));
}
