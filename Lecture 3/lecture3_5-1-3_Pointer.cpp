#include<iostream>
//#include<iomanip>
using namespace std;
//--- main:
int main()
{
    
    float A[2][2]={{1.1,1.2},{1.3,1.4}};
    float * memad1, * memad2, * memad3, * memad4;
    
    memad1 = &A[0][0];
    memad2 = memad1+1;
    memad3 = memad2+1;
    memad4 = memad3+1;
    
    cout << memad1 << " " << *memad1 <<endl;
    cout << memad2 << " " << *memad2 <<endl;
    cout << memad3 << " " << *memad3 <<endl;
    cout << memad4 << " " << *memad4 <<endl;
    return 0;
}