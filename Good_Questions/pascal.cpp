#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> pascals_trinagle_of(int numRows) {

    if(numRows==1)return {{1}};
    if(numRows==2)return {{1},{1,1}};
    vector<vector<int>> v;
    v.push_back({1});
    v.push_back({1,1});
    for(int i = 3; i <= numRows; i++){
        vector<int> temp;
        for (int j = 0; j < i; j++){
            if(j==0 or j==i-1)temp.push_back(1);
            else temp.push_back(v[i-2][j-1]+v[i-2][j]);
        }
        v.push_back(temp);
    }
    return v;


}
// int main(){


//     vector<vector<int>> s;
//     s=pascals_trinagle_of(5);
//     for (vector<int> v:s){
//         for(int k:v){
//             cout<<k<<" ";
//         }
//         cout<<"\n";
//     }
    
//     return 0;
// }