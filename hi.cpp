#include <bits/stdc++.h>
using namespace std;
   
int minExtraChar(string s, vector<string>& dictionary) {
        int ct=s.size(),prevct;
        unordered_map<char,int> m;
        // sort(dictionary.begin(),dictionary.end());
        // sort(s.begin(),s.end());
        for(char c:s)m[c]++;
        for (string s1:dictionary){
            bool flag=true;
            for (char c:s1){
                if(m.find(c)==m.end()){
                    flag=false;
                    break;
                }
                if((m[c]<=0)){ 
                    flag=false;
                    break;
                }
            }
            if(flag){
                cout<<s1<<"\n";
                for(char c:s1){
                    if(m[c]>0)ct--;
                    m[c]--;
                }
            }
        }
    return ct;
}
  long long maxStrength(vector<int>& nums) {

    }
int main(){
    vector<string> s{"ox","lb","diz","gu","v","ksv","o","nuq","r","txhe","e","wmo","cehy","tskz","ds","kzbu"};
    string x="dwmodizxvvbosxxw";
    vector<int> v{8,6,0,5,-4,-8,-4,9,-1,6,-4,8,-5};
    // sort(s.begin(),s.end());
    // cout<<x<<"\n";
    // for(string s1:s){
    //     cout<<s1<<" ";
    // }
    // cout<<minExtraChar("dwmodizxvvbosxxw",s);
    cout<<maxStrength(v);
    return 0;

}