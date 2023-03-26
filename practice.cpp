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




int alpha[26];
int main(){
      map<char,int> mp;
      mp['e'];
      mp['f'];
      mp['g'];
      mp['h'];
      mp['i'];
      mp['n'];
      mp['o'];
      mp['r'];
      mp['s'];
      mp['t'];
      mp['u'];
      mp['v'];
      mp['w'];
      mp['x'];
      mp['z'];
      string s;
      cin>>s;
      for (int i = 0; i < s.size(); i++){
        mp[s.at(i)]++;
      }

      










	return 0;
}