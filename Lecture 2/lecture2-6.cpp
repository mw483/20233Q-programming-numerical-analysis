//
//  main.cpp
//  2021-10-19-4.5reference
//
//  Created by Hiroshi Sagara on 2021/10/19.
//

#include <iostream>
    using namespace std;
    void melon (double, double, double&);
    // main
    int main()
    {
        double a = 2.0;
        double b = 3.0;
        double c;
        melon (a,b,c);
        cout << a << " " << b << " " << c << endl;
        return 0;
    }

// melon
void melon (double a, double b, double& c)
{
    a = 2.0*a;
    c = a+b;
    cout << a << " " << b << " " << c << "; ";
}