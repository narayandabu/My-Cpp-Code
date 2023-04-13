#include <bits/stdc++.h>
using namespace std;
#define el '\n'
#include "Algorithms/SeiveAlgo.cpp"

int divisibleSumPairs(int n, int k, vector<int> ar) {
      int ct{0};
      for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
          if(((ar[i]+ar[j])%k)==0 and i!=j)ct++;
        }
      }
      return ct/2;
}
int arrh[6];
int migratoryBirds(vector<int> arr) {
    int maxh{0},ans{0};
    for (int i = 0; i < arr.size(); i++){
      arrh[arr[i]]++;
    }
    for (int i = 0; i < 6; i++){
      if(arrh[i]>maxh){
        maxh=arrh[i];
        ans=i;
      }
      arrh[i]=0;
    }
    return ans;
}
int reversenum(int n){
    int  reversed_number = 0, remainder;
  while(n != 0) {
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
  }
  return reversed_number;
}
int beautifulDays(int i, int j, int k) {
      int ct{0};
      for (int m =i; m < j; m++){
        if((abs(i-reversenum(i))%k)==0){
          ct++;
        }
      }
      return ct;
}
const int a=1e5; 
int arrf[a];
int arrs[a];
int anagram(string s){
    if(s.size()%2!=0)return -1;
    else{
      int j= s.size()/2,ct{0};
        for (int i = 0; i <j; i++){
          arrf[s[i]-'a']++;
        }
        for (j; j < s.size(); j++){
          arrs[s[j]-'a']++;
        }
        for (int k = 0; k < s.size(); k++){
          if(arrf[s[k]-'a']!=arrs[s[k]-'a']){
            ct+=abs(arrf[s[k]-'a']-arrs[s[k]-'a']);
          }
          arrf[s[k]-'a']=0;
          arrs[s[k]-'a']=0;
        }
        return ct;
    }
}
int arrk[a];
string gameOfThrones(string s) {
      map<char,int> m;
      bool k=true;
      for (int i = 0; i < s.size(); i++){
        m[s[i]]++;
      }
      if(s.size()%2==0){
       for(auto it:m){
        if(it.second%2!=0)return "NO";
       }
        return "YES";
      }
      else
      {
        for(auto it:m){
         if(((it.second)%2!=0)){
          if(k)k=false;
          else return "NO";
         }
       }
        return "YES";
      }
}
int maximumCount(vector<int>& nums) {

    int mid{0},high=nums.size()-1,low{0};
    if(nums[0]>0)return nums.size()-1;
    while(high>low){
      mid=(high+low)/2;
      if(nums[mid]>0){
        high=mid;
      }
      else low=mid+1;
    }
    int pos=nums.size()-high;
    mid=0;
    high=nums.size()-1;
    low=0;
    while(high>low){
      mid=(high+low)/2;
      if(nums[mid]<=0){
        low=mid+1;
      }
      else high=mid;
    }
    int neg=high+1;
    if(nums[pos-1]==0 and nums[neg+1]==0)return 0;
    return max(neg,pos);
  }

int countNegatives(vector<vector<int>>& grid) {

    int negct{0},high{0},low{0},mid{0};
    for (int i = 0; i < grid.size(); i++){
      high=grid[i].size()-1;
      low=0;
      mid=0;
     while(high>low){
       mid=(high+low)/2;
      if(grid[i][mid]<=0){
        low=mid+1;
      } 
      else high=mid;
    }
    int neg=high+1;
    
    return neg;
    }

int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      vector<int> v{-2,-1,-2,-9,0};
      cout<<maximumCount(v);
     return 0;
}