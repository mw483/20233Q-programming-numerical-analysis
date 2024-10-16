#include <iostream>
#include <cmath>

using namespace std;

class Circle{
public:
    double xcenter;
    double ycenter;
    double radius;
    Circle(double a_xcenter, double a_ycenter, double a_radius)
    {
        xcenter = a_xcenter;
        ycenter = a_ycenter;
        radius = a_radius;
    };
};

class Point{
public:
    double xpoint;
    double ypoint;
    Point(double a_xpoint, double a_ypoint)
    {
        xpoint = a_xpoint;
        ypoint = a_ypoint;
    };
};

double distance(double xc, double yc, double xp, double yp)
{
    double distance = sqrt(pow(xp-xc,2)+pow(yp-yc,2));
    return distance;
};

int main(){
    double xcenter, ycenter, radius, xpoint, ypoint;
    cout << "Enter circle center x-coordinate:";
    cin >> xcenter;
    cout << "Enter circle center y-coordinate:";
    cin >> ycenter;
    cout << "Enter circle radius:";
    cin >> radius;
    Circle circle1(xcenter, ycenter, radius);
    cout << "The circle has radius of " << circle1.radius << " and is centered at (" << circle1.xcenter << "," << circle1.ycenter << ") \n";
    cout << "Enter point x-coordinate:";
    cin >> xpoint;
    cout << "Enter point y-coordinate:";
    cin >> ypoint;
    Point point1(xpoint, ypoint);
    cout << "The point is at (" << point1.xpoint << "," << point1.ypoint << ") \n";
    double d = distance(circle1.xcenter, circle1.ycenter, point1.xpoint, point1.ypoint);
    if(d < circle1.radius){
        cout << "The point is inside the circle";
    }
    else if(d == circle1.radius){
        cout << "The point is on the circle";
    }
    else{
        cout << "The point is outside the circle";
    }
    return 0;
}
