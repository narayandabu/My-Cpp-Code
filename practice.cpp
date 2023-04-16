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
queue<int> reverseQueue(queue<int> q)
{
    int temp{0};
    for (int i = 0; i < q.size(); i++){
     temp = q.front();
     q.push(temp);
     q.pop();
    }
    return q;
    
}
void printvec(vector<int> v){
    for (int i = 0; i < v.size();i++)
    {
      cout<<v[i]<<" ";
    }
    cout<<"\n"; 
    
}


int main(){
      
  
     return 0;
}