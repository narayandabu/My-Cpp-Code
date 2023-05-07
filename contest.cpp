#include <bits/stdc++.h>
using namespace std;
#define el endl
#define nl "\n" 
#define d cout<<"debug"<<nl;
#define forn for(int i=0;i<n;i++)
#define forv for(int i=0;i<v.size();i++)
#define forj for(int j=0;j<n;j++)
#define sortv sort(v.begin(),v.end())
#define vecv vector<int> v
#define ll long long
#define lld unsigned long long
#define fora(i,n,k) for(int i=k;i<n;i++)


vector<string> sv;
void generate(string &s, int open,int close){
      if(open==0 and close ==0){
            sv.push_back(s);
            return;
      }
      if(open>0){
            s.push_back('(');
            generate(s,open-1,close);
            s.pop_back();
      }
      if(close>0){
            if(open<close){
                  s.push_back(')');
                  generate(s,open,close-1);
                  s.pop_back();
            }
      }
}

vector<vector<int>> ve;

void gss(vector<int> &t,vector<int> &nums,int i){
      if(i==nums.size()){
            ve.push_back(t);
            return;
      }
      gss(t,nums,i+1);
      t.push_back(nums.at(i));
      gss(t,nums,i+1);
      t.pop_back();
}
vector<int> inverse(vector<int> in){
      vector<int> ans;
      
      return ans;
}




int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t;
      cin>>t;
      while(t--){
            int n,i{0};
            cin>>n;



      }
      return 0;
}
