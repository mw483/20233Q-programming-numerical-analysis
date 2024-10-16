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

    int * memad_a;
    float *memad_b;
    double * memad_c;
    char * memad_d;

    memad_a = &a;
    memad_b = &b;
    memad_c = &c;
    memad_d = &d;

    cout << setw(5) << a << " " <<  memad_a  <<endl;
    cout << setw(5) << b << " " <<  memad_b  <<endl;
    cout << setw(5) << c << " " <<  memad_c  <<endl;
    cout << setw(5) << d << " " <<  memad_d  <<endl;
    return 0;
}

//Output
//    4 11795216
//  1.2 11795212
// 3.45 11795188
//    c 11795223
