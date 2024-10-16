#include <iostream>
#include <iomanip>

using namespace std;

//* Newton-Raphson Method *//

double fx(double x){
    double y = x*x - 3;
    return y;
}

double d_fx(double x){
    double y = 2*x;
    return y;
}

int main(){
    int i;
    double xp = 5;
    for(i=1; i<=10; i++){
        xp = xp - (fx(xp))/(d_fx(xp));
    }
    cout << setprecision(6) << "Newton-Raphson approximate root: " << xp;
    return 0;
}
