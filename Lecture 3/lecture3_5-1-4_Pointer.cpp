#include<iostream>
// #include<iomanip>
using namespace std;
//--- main:
int main()
{
    double a=8.45;
    double * memada;
    double **memadb;
    double ***memadc;
    
    memada = &a;
    memadb = &memada;
    memadc = &memadb;
    
    double verifya = *memada;
    double verifyb = **memadb;
    double verifyc = ***memadc;
    
    cout << a << endl;
    cout << memada << " " << memadb <<  " " << memadc << endl;
    cout << verifya << " " << verifyb <<  " " << verifyc<< endl;
    return 0;
}