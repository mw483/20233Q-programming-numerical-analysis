#include<iostream>
using namespace std;
int GetN();
//--- main:
int main()
{
    //int k,l,m,n=1;
    long long k,l,m,n=1;
    while (n>0)
    {
        n=GetN();
        for(m=2;m<=n-1;m++)
        {
            l=n/m; //--- Test for the remainder
            k=l*m;
            if(k==n) //--- Not a prime
                {
                cout<<"\n"<<n<<" is not a prime number;";
                cout<<"the highest divisor is: "<<l<<"\n";
                break;
            }
        }
        if(k!=n && n!=0 || n==2)  //--- found a prime
        {
            cout<<"\n"<<n<<" is a prime number";
        }
    }
    return 0;
}

//--- Function GetN:
int GetN()
{
    long long n;
    cout<<"\nPlease enter the integer to be tested: \t";
    
    while (cin>>n)
    {
        if (n<0)
        {
            cout<<"\nThe integer must be positive; try again\n";
        }
        else
        {
            goto dromos;
        }
    }
    
dromos:
    return n;
}