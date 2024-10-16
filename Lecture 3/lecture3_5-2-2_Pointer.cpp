#include<iostream>
#include<iomanip>
using namespace std;
//--- main:
int main()
{
string onoma = "arkouditsa";
    int l = onoma.length();
    char oros[l];
    char *memad;
    
    for (int i=0; i<l; i++)
    {
        memad = &onoma[i];
        oros[i]= *memad;
        cout << oros[i];
    }
    return 0;
}