#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    puts("please enter a and b and c for 'ax^2 + bx + c = 0':");
    float a = 0;
    float b = 0;
    float c = 0;
    scanf("%f %f %f", &a, &b, &c);
    float D = (pow(b, 2) - 4 * a * c);
    printf("D: %f\n", D);
    float x1 = (-1 * b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    printf("x1: %f\n", x1);
    float x2 = (-1 * b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    printf("x2: %f\n", x2);
}
