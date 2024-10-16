#include <iostream>

using namespace std;

class fruit{
public:
    string color;
    string shape;
    double size;
    fruit(string a_color, string a_shape, double a_size)
    {
        color = a_color;
        shape = a_shape;
        size = a_size;
    }
    string read_color(bool Iprint) const
    {
        if (Iprint == true)
            cout << color << endl;
        return color;
    }
    void change_color(string clr)
    {
        color = clr;
    }
};

int main()
{
    bool Iprint = true;
    fruit fig("red", "spindle", 1.2);
    fruit apple("yellow", "round", 2.5);
    string fig_color = fig.read_color(Iprint);
    cout << fig_color << endl;
    string apple_color = apple.read_color(Iprint);
    apple.change_color("green");
    apple_color = apple.read_color(Iprint);
    return 0;
}
