#include <bits/stdc++.h>
using namespace std;
#define el endl
 
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t=0;
      cin>>t;
      while(t--){
            int size,maxsame{0},temp;
            bool flag{true};
            unordered_map<int,int> m;
            cin>>size;
            for (int i = 0; i < size; i++){
                cin>>temp;
                m[temp]+=1;
            }
        if(size==2)cout<<"NO\n";
        else{
            if(size%2==0)maxsame=((size/2) + 1);
            else maxsame=((size/2) + 2);
            for(auto it:m){
                if(it.second>=maxsame){
                    flag=false;
                    cout<<"NO\n";
                    break;
                }
            }
            if(flag)cout<<"YES\n";
        }
      }
      return 0;
}