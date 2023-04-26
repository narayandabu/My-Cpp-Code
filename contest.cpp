#include <bits/stdc++.h>
using namespace std;
#define d cout<<"debug\n";
#define nl "\n"
#define forn for(int i=0;i<n;i++)
#define forv for(int i=0;i<v.size();i++)
#define sortv sort(v.begin(),v.end())
#define vecv vector<int> v
#define ll long long
#define lld unsigned long long



int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t=0;
      cin>>t;
      while(t--){
            int n,t,maxent{-1},indx{-1};
            cin>>n>>t;
            vector<int> dur;
            vector<int> ent;
            for (int i = 0; i < n; i++){
                  int durr;
                  cin>>durr;
                  dur.push_back(durr);
            }
            for (int i = 0; i < n; i++){
                  int et;
                  cin>>et;
                  ent.push_back(et);
            }
            for (int i = 0; i < n; i++){
                  if(dur[i]<=t and ent[i]>maxent){
                        maxent=ent[i];
                        indx=i+1;
                  }
                  t--;
            }
            cout<<indx<<"\n"; 
      }
      
      return 0;
}



