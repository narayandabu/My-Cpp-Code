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
 
//https://codeforces.com/contest/14/problem/A
 
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
            int m,n,ct{0},stm{-1},stn{-1},endm{0},endn{0};
            cin>>m>>n;
            char arr[m][n];
            for (int i = 0; i < m; i++){
                ct=0;
                for (int j = 0; j < n; j++){
                    cin>>arr[i][j];
                    if(arr[i][j]=='*'){
                        ct++;
                        endm=i;
                    }
                    if(arr[i][j]=='*' and stm==-1)stm=i;
                }
            }
            for(int i = 0; i < n; i++){
                ct=0;
                for(int j = 0; j < m; j++){
                    if(arr[j][i]=='*'){
                        ct++;
                        endn=i;    
                    }
                    if(arr[j][i]=='*' and stn==-1)stn=i;
                }
            }
            for(int i = stm; i <= endm; i++){
                for(int j = stn; j <= endn; j++){
                    cout<<arr[i][j];
                }
                cout<<nl;
            }
      return 0;
}