#include <bits/stdc++.h>
#define el endl;
using namespace std;



long long coloredCells(int n) {
     long long max = 2*n - 1;
     long long out=0;
     for (int i = 0; i < n; i++)
     {
      out+=(max-(2*i));
     }
     return ((2*out)-max);
}