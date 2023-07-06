#include <bits/stdc++.h>
using namespace std;
 
 
 
int countHillValley(vector<int>& nums){
 int prev{0},pivot{1},after{2},mtorval{0},size=nums.size();
    while (pivot<size-1){
        if(nums[prev]<nums[pivot] and nums[pivot]>nums[after]){
            cout<<prev<<" "<<pivot<<" "<<after<<endl;
            mtorval++;
            prev=pivot;
            pivot++;
            after++;
        }
        else if(nums[prev]>nums[pivot] and nums[pivot]<nums[after]){
            cout<<prev<<" "<<pivot<<" "<<after<<endl;
            mtorval++;
            prev=pivot;
            pivot++;
            after++;
        }
        else{
            pivot++;after++;
        }
    }
    return mtorval;
}
int main(){

    vector<int> v{2,4,1,1,6,5};
    cout<<countHillValley(v);
    return 0;
}