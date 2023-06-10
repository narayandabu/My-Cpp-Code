#include <bits/stdc++.h>
using namespace std;
 
    unordered_map<int,char> func(vector<int>& releaseTimes,string keysPressed){
        unordered_map<int,char> prefixsub;
        prefixsub[releaseTimes[0]]=keysPressed[0];
        for (int i = 1; i < releaseTimes.size(); i++){
        int diff=releaseTimes[i]-releaseTimes[i-1];
        if(prefixsub.find(diff)!=prefixsub.end()){
            if(keysPressed[i]>prefixsub[diff]){
                prefixsub[diff]=keysPressed[i];
            }
        }
        else prefixsub[diff]=keysPressed[i];
    }
    return prefixsub;
    }
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
    char ans{SCHAR_MIN};
    int maxval{INT_MIN};
   unordered_map<int,char> prefixsub;
   prefixsub=func(releaseTimes,keysPressed);
    for(auto it:prefixsub){
        if(it.first>=maxval){
            ans=it.second;
            maxval=it.first;
        }
    }
    return ans;
    }