#include<iostream>
#include<iomanip>
using namespace std;
//--- main:
int main()
{
    int a=4;
    float b=1.2;
    double c=3.45;
    char d=99;
    
    cout << setw(5) << a << " " << &a  <<endl;
    cout << setw(5) << b << " " << &b  <<endl;
    cout << setw(5) << c << " " << &c  <<endl;
    cout << setw(5) << d << " " << &d  <<endl;
    return 0;
}