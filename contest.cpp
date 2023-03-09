#include <bits/stdc++.h>
using namespace std;
#define el endl

const int n=(2*1e5)+7;
int arr[n];
int main(){
    int t=0;
    cin>>t;    
    while(t--){
        int N{0},input{0},max{0};
        cin>>N;
        vector<int> unique;
        for (int i = 0; i < N; i++){
          cin>>input;
          unique.push_back(input);
        }
        for (int i = 0; i < N; i++)
        {
          arr[unique.at(i)]++; 
        }
        for (int i = 0; i < N; i++){
          if(max<=arr[unique.at(i)]){
            max=arr[unique.at(i)];
          }
        }
        cout<<(N-max)<<el;
      }
    return 0;
}