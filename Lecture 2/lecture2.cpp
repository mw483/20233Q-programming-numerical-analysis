//
//  main.cpp
//  201013-tabulation
//
//  Created by Hiroshi Sagara on 2020/10/12.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[])
    {
    int i;
    double step=0.1;
    cout << setiosflags(ios::fixed | ios::showpoint);
    for (i=1;i<=6;i++)
    {
    double x=(i-1.0)*step;
        double y=exp(x);
        cout << setprecision(2) << setw(5) << x << " ";
        cout << setprecision(5) << setw(7) << y << endl;
        }
        return 0;
        }