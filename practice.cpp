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

int search(vector<int>& nums, int target) {
        int high{0},low{0},mid{0},size=nums.size();
        high=size;
        while(high>low)
        {
          mid=(high+low)/2;
          if(nums[mid]>target )high=mid;
          else if(nums[mid]<target )low=mid+1;
          else return mid;
        }
        return -1;
    }









int main(){
      vector<int> v{-1,0,3,5,9,12};
      cout<<search(v,12);

    
	 return 0;
}