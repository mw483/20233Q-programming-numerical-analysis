#include <iostream>
using namespace std;
double ratio1(double, double); // function prototype
double (*point_ratio)(double, double)=ratio1; // and its pointer
double product(double, double); // function prototype
double (*point_product)(double, double)=product; // and pointer
/*--------------------------------------------------
 The following is a function prototype; the arguments consist of two
 "double" scalars and the pointer of a function that receives
 two doubles and returns one double
 -----------------------------------------------------*/
double operate(double, double, double(*)(double, double));
/*--------------- main program --------------------*/
int main()
{
    
    int menu;
    double a = 4.0;
    double b = 2.0;
    double result;
    //double prat;
    //double pprod;
    cout << "Please enter 1 for the ratio and 2 for the product" << endl;
    cout << "q to quit" << endl;
    cout << "q to quit" << endl;
    while(cin >> menu)
    {
        if(menu==1)
        {
            result=operate(a, b, point_ratio);
            //result=operate(a, b);
            cout << a << "/" << b <<"=" << result<< endl;
        }
        else if(menu==2)
        {
            result=operate(a, b, point_product);
            //result=operate(a, b);
            cout << a << "x" << b <<"=" << result<< endl;
        }
    }
    return 0;
}
/*--------------- ratio --------------------*/
double ratio1(double a, double b)
{
    double c=a/b;
    return c;
}
/*--------------- product--------------------*/
double product(double a, double b)
{
    double c=a*b;
    return c;
}
/*--------------- operate--------------------*/
double operate(double a, double b,
               double (*funcall)(double, double))
{
    double c=(*funcall)(a, b);
    return c;
}