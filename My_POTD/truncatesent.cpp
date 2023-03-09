#include <bits/stdc++.h>
#define el endl;
using namespace std;


string truncateSentence(string s, int k) {
        
      string ans;
      int size=s.size(),count{0};
      for (int i = 0; i < size; i++)
      {
        if (s.at(i)==' ' and k>=1)
        {
          k--;
        }
        ans.push_back(s.at(i));
      }
      return ans;
}