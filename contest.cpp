#include <bits/stdc++.h>
using namespace std;
#define el endl
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t=0;
      cin>>t;
      while(t--){
            int a,b,c,d;
            cin>>a>>b>>c>>d;
            for (int i = 1; i < INT_MAX; i++){
                  if(((a+i)%b)==((c+i)%d)){
                  cout<<i<<el;
                  break;
                  }
            }
            
      }
      return 0;
}