#include <iostream>
#include <iomanip>

using namespace std;

const double pi = 3.14;

class Circle{
public:
    double circle_xcenter;
    double circle_ycenter;
    double radius;
    Circle(double a_xcenter, double a_ycenter, double a_radius)
    {
        circle_xcenter = a_xcenter;
        circle_ycenter = a_ycenter;
        radius = a_radius;
    };
};

class Square{
public:
    double square_xcenter;
    double square_ycenter;
    double side;
    Square(double a_sxcenter, double a_sycenter, double a_side)
    {
        square_xcenter = a_sxcenter;
        square_ycenter = a_sycenter;
        side = a_side;
    };
};


int main()
{
    Circle circle1(1.0, 1.0, 2.0);
    Square square1(5.0, 5.0, 8.0);
    cout << setprecision(4) << "The radius of circle 1 is: " << circle1.radius << "\n";
    cout << setprecision(4) << "The center of circle 1 is: (" << circle1.circle_xcenter << "," << circle1.circle_ycenter << ")" "\n";
    cout << setprecision(4) << "The side length of square 1 is: " << square1.side << "\n";
    cout << setprecision(4) << "The center of square 1 is: (" << square1.square_xcenter << "," << square1.square_ycenter << ")" "\n";
    return 0;
}
