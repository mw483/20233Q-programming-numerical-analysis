//
//  main.cpp
//  201013-random
//
//  Created by Hiroshi Sagara on 2020/10/12.
//

#include <iostream>
#include <iomanip>
#include <random>
using namespace std;
int main(int argc, const char * argv[])
{
int N=6, random_integer;
float random_real, random_number, max=RAND_MAX;
cout<< setiosflags(ios::fixed | ios::showpoint);
for(int i=1;i<=N;i++)
{
random_integer = rand();
random_real = random_integer;
random_number = random_real/max;
cout << setw(3) << i << " " << setw(6) << setprecision(5)
<< random_number << endl;
}
return 0;
}