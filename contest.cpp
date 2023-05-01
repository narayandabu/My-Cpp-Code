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

int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t{0};
      cin>>t;
   while(t--){
      int n,temp,rem,size{0},ct{0};
      cin>>n;
      temp=n;
      while(temp!=0){
           if(temp%10!=0)ct++;
           size++;
           temp/=10;
      }
      cout<<ct<<nl;
      for(int i=0;i<size;i++){

            rem=n%10;
            if(rem!=0)cout<<rem*pow(10,i)<<" ";
            n/=10;
      }
      cout<<nl;
    }
      return 0;
}
