#include <bits/stdc++.h>
using namespace std;
 
 
 
int lengthOfLastWord(string s) {
        int size=s.size(),flag=0,end=s.size()-1,start=0;
        for(int i=size-1;i>=0;i--){
            if(s[i]!=' ' and flag==0){
                flag=1;
                end=i;
            }
            else if(i==0 or (s[i]==' ' and flag==1)){
                if((s[i]==' ' and flag==1))start=i+1;
                else start=i;
            }
        }
        return end-start+1;
    }