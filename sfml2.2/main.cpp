#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <cmath>

constexpr unsigned WINDOW_WIDTH = 800;
constexpr unsigned WINDOW_HEIGHT = 600;

using namespace std;
using namespace sf;

int main()
{
    constexpr int pointCount = 200;
    const Vector2f ellipseRadius = {200.f, 80.f};
    const Vector2f position = {300, 300};
    const float radius = 45;

    float speedX = 100.f;
    float time = 0;
    float period = 2;

    ContextSettings settings;
    settings.antialiasingLevel = 8;
    RenderWindow window(VideoMode({800, 600}), "Ellipse", Style::Default, settings);
    Clock clock;

    ConvexShape ellipse;
    ellipse.setPosition({400, 320});
    ellipse.setFillColor(Color(0xFF, 0x09, 0x80));

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
        ellipse.setPointCount(pointCount);
        for (int pointNo = 0; pointNo < pointCount; ++pointNo)
        {
            float angle = float(2 * M_PI * pointNo) / float(pointCount);

            Vector2f point = {
                200 * sin(6 * angle) * sin(angle),
                200 * sin(6 * angle) * cos(angle)};
            ellipse.setPoint(pointNo, point);
        }

        const float dt = clock.restart().asSeconds();
        time = time + dt;
        const float wavePhase = time * float(2 * M_PI);
        float x = radius * cos(wavePhase / period);
        float y = radius * sin(wavePhase / period);
        const Vector2f offset = {x, y};

        ellipse.setPosition(position + offset);

        window.clear();
        window.draw(ellipse);
        window.display();
    }
}
