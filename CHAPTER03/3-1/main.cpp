#include <iostream>
using namespace std;

/* Circle 선언부 */
class Circle
{
public:
    int radius;
    double getArea();
};

/* Circle 구현부 */
double Circle::getArea()
{
    return 3.14 * radius * radius;
}

int main()
{
    Circle donut;
    donut.radius = 1;
    double area = donut.getArea();
    cout << "donut 면적은 " << area << endl;

    Circle pizza;
    pizza.radius = 30;
    area = pizza.getArea();
    cout << "pizza 면적은 " << area << endl;
}
