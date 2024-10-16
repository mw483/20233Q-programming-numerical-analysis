#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
    float x[100], y[100], xp, yp=0, p;
    int i,j,n;

    // Data Input
    cout<<"Enter number of data: "<< endl;
    cin>>n;
    cout<<"Enter data: "<< endl;
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"] = ";
        cin>>x[i];
        cout<<"y["<<i<<"] = ";
        cin>>y[i];
    }
    cout<<"Enter interpolation point: ";
    cin>>xp;
    // Lagrange interpolation
    for(i=1;i<=n;i++)
    {
        p=1;
        for(j=1;j<=n;j++)
        {
            if(i!=j)
            {
                p = p*(xp - x[j])/(x[i] - x[j]);
            }
        }
        yp = yp + p * y[i];
    }
    cout<< endl<<"f("<<xp<< ") = "<< yp;
    return 0;
}


