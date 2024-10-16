#include <iostream>
#include <iomanip>

#define SIZE 10
using namespace std;

//start
    int main()
    {
        float A[SIZE][SIZE], x[SIZE], ratio;
        int i, j, k, n;
    // Input matrix size(order)
        cout << "Input matrix size (nxn): n = ";
        cin >> n;
    // Reading matrix input
        cout<<"Enter matrix coefficients: " << endl;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                cout<<"A["<<i<<"]["<<j<<"]= ";
                cin>>A[i][j];
            }
        }
    // Augmenting nxn identity matrix
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i==j)
                {
                    A[i][j+n] = 1;
                }
                else
                {
                    A[i][j+n] = 0;
                }
            }
        }
    // Applying Gauss-Jordan Elimination
        for(i=1;i<=n;i++)
        {
            if(A[i][i] == 0.0)
            {
                cout<<"Mathematical error";
                exit(0);
            }
            for(j=1;j<=n;j++)
            {
                if(i!=j)
                {
                    ratio = A[j][i]/A[i][i];
                    for(k=1;k<=2*n;k++)
                    {
                        A[j][k] = A[j][k] - ratio*A[i][k];
                    }
                }
            }
        }
        // Make principal diagonal equal to 1
        for(i=1;i<=n;i++)
        {
            for(j=n+1;j<=2*n;j++)
            {
                A[i][j] = A[i][j]/A[i][i];
            }
        }
        // Display inverse matrix
        cout<< endl<<"The inverse matrix is:"<< endl;
        for(i=1;i<=n;i++)
        {
            for(j=n+1;j<=2*n;j++)
            {
                cout<<setw(9)<< A[i][j]<<" ";
            }
            cout<< endl;
        }
        return 0;
    }
