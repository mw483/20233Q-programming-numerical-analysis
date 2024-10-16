#include <iostream> 
#include <iomanip>
using namespace std;
int main()
{
float a[6]={0.0, 8.0, 9.7, -1.4, -8.0, 13.8};
int i,j;
int m[6]; // indexing array
const int N=5;
for(i=1; i<=N; i++)
{
m[i]=1;
for(j=1; j<=N; j++)
{
if(a[i] <a[j] && i!=j) m[i]++;
}
}
//--- print the list
cout << fixed << showpoint;
for(i=1; i<=N; i++)
cout << setw(8) << setprecision(2) << a[i] << " "<<m[i] << endl;
}