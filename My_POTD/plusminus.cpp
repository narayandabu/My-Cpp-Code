#include <bits/stdc++.h>
#define el endl;
using namespace std;



void plusMinus(vector<int> arr) {
      int countp{0},countn{0},count0{0},size{0},m{0};
      size=arr.size();
      float ratio{0};
      m=1e6;
      for (int i = 0; i <size; i++)
      {
        if (arr.at(i)>0)
        {
          countp++;
        }
        else if (arr.at(i)<0)
        {
          countn++;
        }
        else
        {
          count0++;
        }
      }
      ratio=countp*m/size;
      cout<<fixed<<ratio/m<<setprecision(6)<<el;
      ratio=countn*m/size;
      cout<<fixed<<ratio/m<<setprecision(6)<<el;
      ratio=count0*m/size;
      cout<<fixed<<ratio/m<<setprecision(6)<<el;
}