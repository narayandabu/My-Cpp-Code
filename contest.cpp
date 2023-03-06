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
      int n{0},sum{0},input{0};
      vector<int> arr;
      cin>>n>>sum;
      for (int i = 0; i < n; i++)
      {
        cin>>input;
        arr.push_back(input);
      }
      if (is_sorted(arr)==1)
      {
        cout<<"YES"<<el;
      }
      else
      {
        int temp{0},min{0},max{0};
        for (int i = 0; i < arr.size(); i++)
        {
            max=i;
            temp=arr[i];
            
        }
        


      }
      

    }
      return 0;
}