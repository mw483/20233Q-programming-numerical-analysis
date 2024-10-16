//
//  main.cpp
//  2021-10-19-4.5reference
//
//  Created by Hiroshi Sagara on 2021/10/19.
//

#include <iostream>
    using namespace std;
    void prj (double[], double[], int, double&);
    // main
    int main()
    {
        const int n=2;
        double a[n] = {0.1, 0.2};
        double b[n] = {2.1, 3.1};
        double prod;
        prj (a,b,n,prod);
        cout << "inner product:   " << prod << endl;
        return 0;
    }

// prj
void prj (double a[], double b[], int n, double& prod)
{
    prod = 0.0;
    for (int i=0; i<=n-1;i++)
    prod = prod+ a[i]*b[i];
}