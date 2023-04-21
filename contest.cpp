#include <bits/stdc++.h>
using namespace std;
#define el endl
#define d cout<<"debug\n";
#define nl "\n"

 
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t=0;
      cin>>t;
      while(t--){
            int n{0},ct{0};
            bool z=true,r=false;
            string s;
            cin>>ct;
            cin>>s;
            while((ct>1 and n<ct-1)){
                  if(s[n]!=s[n+1] and z==true){
                        
                        z=false;
                        r=true;
                        s.erase(n,n+2);
                        n=0;
                  }
                  else if(s[n]!=s[n+1] and r==true){
                        
                        r=false;
                        z=true;
                        s.erase(n,n+2);
                        n=0;
                  }
                  ct=s.size();
                  n++;
            }
            if(z)cout<<"Ramos\n";
            else cout<<"Zlatan\n";
      }
      return 0;
}



