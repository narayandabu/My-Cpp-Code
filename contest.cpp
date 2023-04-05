#include <bits/stdc++.h>
using namespace std;
#define el endl
 
 
main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int a{0},t{0};

      string s;
      cin>>a>>t;
      cin>>s;
    while(t--){  
      vector<int> v;
      for (int i = 0; i < s.size()-1; i++){
            if(s[i]=='B' and s[i+1]=='G'){
                  v.push_back(i);
            }
      }
      for(auto it:v)swap(s[it],s[it+1]);
            
            
      
    }
    cout<<s;
    
    
      
}

