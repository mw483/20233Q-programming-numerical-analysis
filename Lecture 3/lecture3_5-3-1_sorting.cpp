//
//  main.cpp
//  191023-07
//
//  Created by sagara-h-aa on 2019/10/23.
//  Copyright © 2019 sagara-h-aa. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    const int N=10;
    int v[N];
    for (int i = 0; i < N; i++)
        v[i] = rand();
    sort(v, v+N);
    cout << setiosflags(ios::fixed | ios::showpoint);
    for(int i=0;i<=N-1;i++)
    {
        cout << setw(3) << i << " " << setw(6) << setprecision(2) << v[i] << endl;
    }
    return 0;
}