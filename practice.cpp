#include <bits/stdc++.h>
using namespace std;
#define el '\n'
#define nl "\n"

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

int findNumbers(vector<int>& nums) {

  int temp{0},rem{0},ct{0},ans{0};
  for(int i:nums){
    temp=i;
    ct=0;
    while(temp/=10){
      ct++;
    }
    if(ct%2==0)ans++;
  }
  return ans;

}





int main(){
      int t;
      cin>>t;
    while(t-- ){
      vector<int> x;
      vector<int> y;
      bool flag=true;
      for (int i = 0; i < 4; i++){
        int x1{0};
        cin>>x1;
        x.push_back(x1);
      }
      for (int i = 0; i < 4; i++){
        int y1{0};
        cin>>y1;
        y.push_back(y1);
      }
      for (int i=0;i<4;i++){
        for(int j=0;j<4;j++){
        if(x[i]==x[j] and y[i]==y[j] and i!=j){
          cout<<"NO\n";
          flag=false;
        }   
        }
        if(flag==false)break;
      }
      if(flag==false)continue;
      int ab,bc,cd,da;
      ab=abs((x[0]-x[1])*(x[0]-x[1])+(y[0]-y[1])*(y[0]-y[1]));
      bc=abs((x[2]-x[1])*(x[2]-x[1])+(y[2]-y[1])*(y[2]-y[1]));
      cd=abs((x[2]-x[3])*(x[2]-x[3])+(y[2]-y[3])*(y[2]-y[3]));
      da=abs((x[3]-x[0])*(x[3]-x[0])+(y[3]-y[0])*(y[3]-y[0]));
      if(ab==0 or bc==0 or cd==0 or da==0){
        cout<<"NO\n";
      }
      else if(ab==bc and bc==cd and cd==da){
        cout<<"Yes\n";

      }
      else{
       cout<<"No\n";    
      }
    
    }
     return 0;
}