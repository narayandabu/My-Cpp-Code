#include <bits/stdc++.h>
using namespace std;
#define el endl
 
int arr[8];
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t=0;
      cin>>t;
      while(t--){
         vector<int> v;
         int n{0},temp{0};
         cin>>n;
         for (int i = 0; i < n; i++){
            cin>>temp;
            v.push_back(temp);
         }
         int size=size=v.size();
         bool flag=true,yn=true;
         for (int i = 0; i < size; i++){
            if(v[i]<0 or v[i]>7){
                  cout<<"No"<<el;
                  yn=false; 
                  break;
            }
            if (v[i]!=7 and flag==true)arr[v[i]]++;
            else if(v[i]==7) flag=false;
            else arr[v[i]]--;
         }
         
         if(yn==true){
            for (int i = 0; i < 7; i++){
               if(arr[i]!=0){
               yn=false;
               cout<<"No"<<el;
               break;
             }
            }
            if(yn)cout<<"Yes"<<el;
         }
      }
      return 0;
}