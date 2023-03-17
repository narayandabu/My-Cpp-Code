#include <bits/stdc++.h>
#define el endl;
using namespace std;




vector<int> decode(vector<int>& encoded, int first) {
        int size=encoded.size(),xored{0};
        xored=encoded[0]^first;
        encoded[0]=first;
        for (int i = 1; i <size; i++)
        {
          first=encoded[i];
          encoded[i]=xored;
          xored=encoded[i]^first;
        }
        encoded.push_back(xored);
        return encoded;
}

//https://leetcode.com/problems/decode-xored-array/