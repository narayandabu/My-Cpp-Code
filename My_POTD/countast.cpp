#include <bits/stdc++.h>
using namespace std;


int countAsterisks(string s){
    bool flag=true;
    int ct{0};
    for(char c:s){
        if(c=='|' and flag)flag=false;
        else if(c=='|' and !flag)flag=true;
        if(c=='*' and flag)ct++;
    }
    return ct;
}
//https://leetcode.com/problems/count-asterisks/submissions/
