#include <bits/stdc++.h>
using namespace std;
 
 
 

int chalkReplacer(vector<int>& chalk, int k) {
    long long sum{0};
    int size=chalk.size(),mod=0,i=0;
    for(i=0;i<size;i++)sum+=chalk[i];
    mod=sum%k;
    if(mod==0)return 0;
    else{
        for(i=0;i<size;i++)mod-=chalk[i];
        return i;
    }
}


