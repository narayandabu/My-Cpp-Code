#include <bits/stdc++.h>
using namespace std;
 
 
 



class ProductOfNumbers {
public:
    vector<int> nums;
    int zero_idx=-1;
    ProductOfNumbers(){
        nums.push_back(1);
    }
    void add(int num){
        if(num==0){
            zero_idx=nums.size()-1;
            nums.clear();
            nums.push_back(1);
        }
        else{
            nums.push_back(nums.back()*num);
        }
    }
    int getProduct(int k){
        if(k>=(nums.size()))return 0;
        else{
            return (nums[nums.size()-1]/nums[nums.size() - k + 1]);
        }
    }
    void print(){
        cout<<"size:- "<<nums.size()<<endl;
        for(auto it:nums){
            cout<<it<<" ";
        }
        cout<<endl;
    }
};

int main(){
    ProductOfNumbers* obj=new ProductOfNumbers;
                //val   k
    obj->add(9);  //0   7
    obj->add(8);  //0   6
    obj->add(0);  //0   5
    obj->add(1);  //18  4
    obj->add(2);  //18  3
    obj->add(1);  //9   2
    obj->add(9);  //9   1
    obj->print();
    // cout<<obj->zero_idx<<endl;
    int param_2=obj->getProduct(3);
    cout<<param_2;
    return 0;
}