#include <bits/stdc++.h>
#define el endl;
using namespace std;


bool is_sorted(vector<int> &arr){
  int prev{INT_MIN};
  for (int i = 0; i < arr.size()-1; i++){
    prev=arr.at(i);
    if (prev>arr.at(i+1))
    {
      return false;
    }
  }
  return true;
}
int mod(int x){
    if(x>=0)return x;
    else return -1*x;
}
long long int binary_exp_r(int a , int b){  //Recursive Approach
  // Time complexity Log(n);
      if (b==0) return 1;
      long long int temp = binary_exp_r(a,b/2);
      if(b&1) return a*temp*temp;
      else return temp*temp;

}
long long int binary_exp_i(int a,int b){ // Iterative approach
        // Time Complexity Log(N);
      int ans{1};
      while(b){
        if (b&1){
          ans*=a; 
        }
        a=a*a;
        b>>=1;
      }
      return ans;
}



// int majorityElement(vector<int>& nums) {
//     int major{INT_MIN},size=nums.size(),count{0};
//     for (int i = 0; i < size; i++){
//       if(major!=nums[i] and count==0){
//         major=nums[i];
//         count++;
//       }
//       else if (major==nums[i]) count++;
//       else count--;
//     }
//     return major;
// }
int majorityElement(vector<int>& nums) {
      map<int,int> fqtable;
      int size=nums.size(),counter{0},majority{0};
      for (int i = 0; i < size; i++){
        if(fqtable.find(nums[i])==fqtable.end()){
          fqtable.insert(nums[i],0);
        }
        else fqtable[nums[i]]++;
      }
      for (auto it : fqtable){
        if((it.second)>counter)majority=it.first;
      }
      return majority;
}




int main(){

    vector<int> v{1,3,3,3,2};
    cout<<majorityElement(v);
    
	 return 0;
}