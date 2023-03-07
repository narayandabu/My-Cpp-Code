#include <bits/stdc++.h>
using namespace std;
#define el endl

int is_sorted(vector<int> &arr){
  int prev{INT_MIN};
  for (int i = 0; i < arr.size()-1; i++){
    prev=arr.at(i);
    if (prev>arr.at(i+1))
    {
      return -1;
    }
  }
  return 1;

}




int main(){
    int t=0;
    cin>>t;    
    while(t--){
      
        int n{0},x{0};
        set<int> stick;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
          cin>>x;
          stick.insert(x);
        }
        auto it = (--(--stick.end()));
        cout<<(*it)<<el;
      }
      return 0;
}