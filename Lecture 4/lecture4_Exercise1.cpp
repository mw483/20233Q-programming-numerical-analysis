#include <iostream>
#include <iomanip>

using namespace std;

const double pi = 3.14;

class Circle{
public:
    double xcenter;
    double ycenter;
    double radius;
    double calc_perimeter;
    Circle(double a_xcenter, double a_ycenter, double a_radius)
    {
        xcenter = a_xcenter;
        ycenter = a_ycenter;
        radius = a_radius;
    };
    double perimeter(double radius, double pi)
    {
        double res_perimeter = 2*radius*pi;
        return res_perimeter;
    };
    double getPerimeter(double res_perimeter)
    {
        calc_perimeter = res_perimeter;
    };
};

int main()
{
    Circle circle1(0.0, 0.0, 4.2);
    Circle circle2(1.3, 3.4, 3.67);
    cout << setprecision(4) << "The radius of circle 1 is: " << circle1.radius << "\n";
    cout << setprecision(4) << "The perimeter of circle 1 is: " << circle1.perimeter(circle1.radius, pi) << "\n";
    cout << setprecision(4) << "The radius of circle 2 is: " << circle2.radius << "\n";
    cout << setprecision(4) << "The perimeter of circle 2 is: " << circle2.perimeter(circle2.radius, pi) << "\n";
    return 0;
}
