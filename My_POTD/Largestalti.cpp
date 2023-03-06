#include <bits/stdc++.h>
#define el endl;
using namespace std;


int largestAltitude(vector<int>& gain) {
    int size=gain.size(),max{0};
    if(gain[0]>max){max=gain[0];}
    for (int i = 1; i < size; i++){
      gain[i]+=gain[i-1];
      if(gain[i]>max){max=gain[i];}
    }
    return max;
}