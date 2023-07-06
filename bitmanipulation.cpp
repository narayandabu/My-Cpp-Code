#include <bits/stdc++.h>
using namespace std;
#define nl "\n" 
#define de(x) cout<<x<<nl;
#define forn for(int i=0;i<n;i++)
#define forv for(int i=0;i<v.size();i++)
#define sortv sort(v.begin(),v.end())
#define vecv vector<int> v
#define ll long long
#define lld unsigned long long
#define fora(i,n,k) for(int i=k;i<n;i++)
#define txtio freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int md=1e9+7;
bool isvowel(char ch){return ch=='a' or ch=='e' or ch=='i' or ch=='o' or 'u';}
ll binexpomd(ll a,ll b,ll m){
ll res=1;
while(b>0){
   if(b&1)res= (res%m * a%m)%m;
   a=(a%m * a%m)%m;
   b>>=1;
}
return res;
}
vector<int> setbits(int n){ //Returns the indexes of setbits of a number
   vector<int> stbits;
   int i=0;
   while(n){
     if(n&1)stbits.push_back(i);
     i++;
     n>>=1;
   }
   return stbits;
}
vector<vector<int>> subsetgeneratebtmsk(int n,vector<int> nums){// generates subsets of a given vector with bitmasking
         vector<vector<int>> subsets;
         int mask_size=n;
         int mask=(1<<(n));
         for(int i=0;i<mask;i++){
           vector<int> indexes=setbits(i),subset;
           for(int j=0;j<indexes.size();j++){
               subset.push_back(nums[indexes[j]]);
           }
           subsets.push_back(subset);
         }
         return subsets;
}
 
 
 
 
 
void solve(){
          
      
 
 
  return;
}
 
int main(){
      fast;
      //txtio;
      int t=0;
      cin>>t;
      while(t--)solve();
      return 0;
}