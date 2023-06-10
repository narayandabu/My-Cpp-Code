#include <bits/stdc++.h>
using namespace std;
#define nl "\n" 
#define d cout<<"debug"<<nl;
#define forn for(int i=0;i<n;i++)
#define forv for(int i=0;i<v.size();i++)
#define sortv sort(v.begin(),v.end())
#define vecv vector<int> v
#define ll long long
#define lld unsigned long long
#define fora(i,n,k) for(int i=k;i<n;i++)
#define txtio   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
 
 
 
// strings,implementation,maths.
 //https://codeforces.com/contest/108/problem/A
void solve(){
    int hr,min;
    scanf("%d:%d",&hr,&min);
    while(true){
        min++;
        if(min==60){
        hr+=1;
        min=0;
    }
    if(hr==24){
        hr=0;
    }
    if(hr%10==(min/10) and min%10==(hr/10)){
        if(hr==0 and min==0)cout<<"00:00";
        else if(min==0)cout<<hr<<":"<<"00";
        else if(hr==0)cout<<"00:"<<min;
        else{ 
            if(hr/10==0 or min/10==0){
                if(hr/10 ==0 and min/10==0){
                    cout<<"0"<<hr<<":"<<"0"<<min;
                }
                if(hr/10==0){
                    cout<<"0"<<hr<<":"<<min;
                }
                else if(min/10==0){
                    cout<<hr<<":0"<<min;
                }
            }
            else cout<<hr<<":"<<min<<nl;
        }
        break;
    }
    }
  return;
}
 
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      //txtio;
      solve();
      return 0;
}