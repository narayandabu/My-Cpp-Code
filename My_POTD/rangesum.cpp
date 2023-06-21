#include <bits/stdc++.h>
using namespace std;
 
 
 
class NumArray {
public:
    vector<int> * prefixsum;
    NumArray(vector<int>& nums) {
        prefixsum = new vector<int>(nums.size(),0);
        prefixsum->at(0)=nums[0];
        for(int i=1;i<nums.size();i++){
            prefixsum->at(i)+=(nums[i]+prefixsum->at(i-1));
        }
    }
    int sumRange(int left, int right) {
        if(left==0)return prefixsum->at(right);
        return  (prefixsum->at(right)-prefixsum->at(left-1));
    }
    void print(){
        for(auto i=prefixsum->begin();i!=prefixsum->end();i++){
            cout<<(*i)<<" ";
        }
    }
};






int main(){
        vector<int> v{-2, 0, 3, -5, 2, -1};
        NumArray* obj=new NumArray(v);
        for(int i:v)cout<<i<<" ";
        cout<<endl;
        obj->print();
        cout<<endl;
        cout<<obj->sumRange(0,5);

    return 0;
}