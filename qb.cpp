#include <bits/stdc++.h>
using namespace std;
#define el endl
#define nl " \n  " 
#define d cout<<"debug"<<nl;
#define forn for(int i=0;i<n;i++)
#define forv for(int i=0;i<v.size();i++)
#define sortv sort(v.begin(),v.end())
#define vecv vector<int> v
#define ll long long
#define lld unsigned long long
 
 
 
int prefixCount(vector<string>& words, string pref) {
    int sizep=pref.size(),ct{0};
    bool flag=true;
    for (string word:words){
        if(sizep>word.size())continue;
        else{
            for (int i = 0; i < pref.size(); i++){
                if(word[i]!=pref[i])flag=false;
            }
            if(flag){
             cout<<word;
                ct++;
            }
                   
        }
    }
    return ct;
    }
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      vector<string> s{"leetcode","win","loops","success"};
      cout<<prefixCount(s,"code");
      
      return 0;
}