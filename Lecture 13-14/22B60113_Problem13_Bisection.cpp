#include <iostream>
#include <iomanip>

using namespace std;

//* Bisection Method *//

double fx(double x){
    double y = x*x - 3;
    return y;
}

int main(){
    int i;
    double a=0.0, b=3.0; // f(a) = -3 < 0 | f(b) = 6 > 0
    double c;
    for(i=1; i<=10; i++){
        c = (a+b)/2.0;
        if (fx(c) < 0){
            a = c;
        }
        else if (fx(c) > 0){
            b = c;
        }
        else if (fx(c) == 0){
            break;
        }
    }
    cout << setprecision(6) << "Bisection method approximate root: " << c;
    return 0;
}
