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
int searchInsert(vector<int>& nums, int target) {
        int high{0},low{0},mid{0},size=nums.size();
        high=size;
        while(high>low){
          mid=(high+low)/2;
          if(nums[mid]>target )high=mid;
          else low=mid+1;
        }
        return mid;
}

vector<int> sortedSquares(vector<int>& nums) {
      int size=nums.size(),l{0};
      int r=size-1;
      vector<int> ans(nums.size());
      for (int i = size-1; i >=0; i--){
        if(abs(nums[r])>abs(nums[l])){
          ans[i]=nums[r]*nums[r];
          r--;
        }
        else{
          ans[i]=nums[l]*nums[l];
          l++;
        }
      }
      return ans;
}
bool canConstruct(string ransomNote, string magazine) {
     unordered_map<char,int> m;
     for (int i = 0; i < ransomNote.size(); i++){
      m[ransomNote.at(i)]++;
     }
     for (int i = 0; i < magazine.size(); i++){
      if(m.find(magazine.at(i))!=m.end())m[magazine.at(i)]--;
     }
     for(auto it:m)if(it.second>0)return false;
     return true;

}

void rotate(vector<int>& nums, int k) {
      reverse(nums.begin(),nums.end());
      reverse(nums.begin(), nums.begin()+k);
      reverse(nums.begin()+k, nums.end());
    }
void printvector(vector<int>  v){
      for (int i = 0; i < v.size(); i++)
      {
        cout<<v[i]<<" ";
      }
      cout<<el;
      return ;
}
string decodeMessage(string key, string message) {
    unordered_map<char,char> m;
    char letter='a';
    string ans;
    for (int i = 0; i < key.size(); i++){
      if(key.at(i)!=' ' and m.find(key.at(i))==m.end()){
        m[key.at(i)]=letter;
        letter++;
      }
    }
    for (int i = 0; i < message.size(); i++){
      if(message.at(i)!=' '){
       auto it =m.find(message.at(i));
       ans.push_back((*it).second);
      }
      else ans.push_back(' ');
    }
    return ans;
    }
int main(){
    string key="the quick brown fox jumps over the lazy dog";
    string mesg="vkbs bs t suepuv";
    cout<<decodeMessage(key,mesg)<<el;
    // string h="hellow world";
    // cout<<h[6];
	 return 0;
}