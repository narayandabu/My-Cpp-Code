#include <bits/stdc++.h>
#define el endl;
using namespace std;


bool halvesAreAlike(string s){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<char,int> mp;
    mp['a']=0;
    mp['e']=0;
    mp['i']=0;
    mp['o']=0;
    mp['u']=0;
    mp['A']=0;
    mp['E']=0;
    mp['I']=0;
    mp['O']=0;
    mp['U']=0;
    int size2=s.size()/2,countf{0},counts{0};
    for (int i = 0; i < size2; i++){
        if (mp.find(s.at(i))!=mp.end()){
          countf++;
        }
        if (mp.find(s.at(i+size2))!=mp.end()){
          counts++;
        }
    }
    if (countf==counts)
    {
      return true;
    }
    else
    {
      return false;
    }
}
//https://leetcode.com/problems/determine-if-string-halves-are-alike/