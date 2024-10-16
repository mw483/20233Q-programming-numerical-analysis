#include <bits/stdc++.h>
#define pi 3.14159265359

using namespace std;

class point
{
public:
    void set_point(double, double);
    double get_pointx();
    double get_pointy();
private:
    double xp, yp;
};

class circle
{
public:
    void set_circle(double,double,double);
    double get_circlex();
    double get_circley();
    double get_circleradius();
private:
    double xcenter, ycenter, radius;
};

void point::set_point(double x1, double y1)
{
    xp = x1;
    yp = y1;
    cout << "point (x,y): " << x1 << "," << y1 << "\n";
}

void circle::set_circle(double x, double y, double r)
{
    xcenter = x;
    ycenter = y;
    radius = r;
    cout << "circle center (x,y): " << x << "," << y << "\n";
    cout << "circle radius: " << r << "\n";
};

double point::get_pointx()
{
    return xp;
};

double point::get_pointy()
{
    return yp;
};

double circle::get_circlex()
{
    return xcenter;
};

double circle::get_circley()
{
    return ycenter;
};

double circle::get_circleradius()
{
    return radius;
};

double distance(double xcircle, double ycircle, double xpoint, double ypoint)
{
    double dist = sqrt((xpoint-xcircle)*(xpoint-xcircle) + (ypoint-ycircle)*(ypoint-ycircle));
    return dist;
}

int main ()
{
    point p1;
    p1.set_point(10, -10);
    circle c1;
    c1.set_circle(-5,10,20);
    double d = distance(c1.get_circlex(), c1.get_circley(), p1.get_pointx(), p1.get_pointy());
    cout << "distance from point to center of circle is: " << d << endl;
        if (d < c1.get_circleradius())
            {cout << "point is inside circle";}
        else if (d == c1.get_circleradius())
            {cout << "point is on circle perimeter";}
        else
            {cout << "point is outside circle";}
    return 0;
}