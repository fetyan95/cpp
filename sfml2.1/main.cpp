#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <cmath>

constexpr unsigned WINDOW_WIDTH = 800;
constexpr unsigned WINDOW_HEIGHT = 600;

using namespace sf;
using namespace std;

int main()
{
    RenderWindow window(VideoMode({800, 600}), "Moving Ball");
    Clock clock;

    const Vector2f position = {10, 350};
    constexpr float BALL_SIZE = 40;

    float speedX = 100.f;
    float time = 0;
    float x = 0;

    CircleShape ball(BALL_SIZE);
    ball.setFillColor(Color(0xFF, 0XFF, 0xFF));

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {

                window.close();
            }
        }
        float amplitudeY = 80.f;
        float periodY = 2;

        const float dt = clock.restart().asSeconds();
        time = time + dt;
        const float wavePhase = time * float(2 * M_PI);
        x = x + speedX * dt;
        const float y = amplitudeY * sin(wavePhase / periodY);
        const Vector2f offset = {x, y};

        if ((x + 2 * BALL_SIZE >= WINDOW_WIDTH) && (speedX > 0))
        {
            speedX = -speedX;
        }
        if ((x < 0) && (speedX < 0))
        {
            speedX = -speedX;
        }

        ball.setPosition(position + offset);

        window.clear();
        window.draw(ball);
        window.display();
    }
}
