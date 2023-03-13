#include <bits/stdc++.h>
#define el endl;
using namespace std;



vector<int> replaceElements(vector<int>& arr) {
      int max{-1},current{0},size=arr.size();
      for(int i=size-1;i>=0;i--){
        if (arr[i]>max){
          current=arr[i];
          arr[i]=max;
          max=current;
        }
      }
      return arr;
}