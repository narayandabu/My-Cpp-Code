#include<bits/stdc++.h>
using namespace std;
void duplicateZeros(vector<int>& arr){
    int size=arr.size();
    for(int i = 0; i < size; i++){
        if(arr[i]==0){
            arr.insert(arr.begin()+i,0);
            arr.pop_back();
            i++;
        }
    }
}
// int main(){
//     vector<int> v{8,4,5,0,0,0,0,7};
//     duplicateZeros(v);
//     for(int k:v){
//         cout<<k<<" ";
//     }
//     return 0;
// }