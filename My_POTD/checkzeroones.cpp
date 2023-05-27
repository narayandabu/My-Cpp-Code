#include <bits/stdc++.h>
using namespace std;


//https://leetcode.com/problems/longer-contiguous-segments-of-ones-than-zeros/submissions/

bool checkZeroOnes(string s) {
    int size=s.size(),ctmax0{0},ctmax1{0},ct0{0},ct1{0};
    if(size==1 and s[0]=='1')return true;
    else if(size==1 and s[0]=='0')return false;
    for (int i = 0; i < size-1; i++){
        if(s[i]==s[i+1] and s[i]=='0'){
            ct0++;
            ctmax0=max(ctmax0,ct0);
        }
        else if(s[i]==s[i+1] and s[i]=='1'){
            ct1++;
            ctmax1=max(ctmax1,ct1);
        }
        else{
            ct0=0;
            ct1=0;
        }
    }
    return ctmax1>ctmax0;



    }