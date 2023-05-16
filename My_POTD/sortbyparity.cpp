#include <bits/stdc++.h>
using namespace std;

bool to_swap(int a,int b){

    if(a%2==b%2){
        return a>b;
    }
    return (a%2 and b%2);
}


vector<int> sortArrayByParity(vector<int>& nums) {
        

    sort(nums.begin(),nums.end(),[](int a,int b){return a%2 <b%2;});
    return nums;
    }

