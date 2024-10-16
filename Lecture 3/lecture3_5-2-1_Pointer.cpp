#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
//--- main:
int main()
{
string onoma = "arkouditsa";
    int l = onoma.length();
    char oros[l]; //array named oros, containing char variables, with length l=length of onoma
    char *memad;
    
    for (int i=0; i<l; i++)
    {
        memad = &onoma[i];
        oros[i]= *memad;
        cout << oros[i];
    }
    return 0;
}