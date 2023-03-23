#include <bits/stdc++.h>
#define el endl;
using namespace std;



bool isPowerofTwo(long long n){
      if(n==1 or n==2){
        return true;
      }
      if (n==0)
      {
        return false;
      }
      if((n%2)==0){
        long long m=n/2;
        isPowerofTwo(m);
      }
      else if ((n%2)!=0){
        return false;
      }
    return true;
}
void rotate(int arr[],int n){

    int last=arr[n-1];
    for (int i = n; i > 1; i--){
        arr[i-1]=arr[i-2];
    }
    arr[0]=last;
      for (int i = 0; i < n; i++)
      {
        cout<<arr[i]<<" ";
      }
      return;
      
}
pair<long long, long long> getMinMax(long long a[], int n) {
    
    long long min,max;
    for (int i = 0; i < n; i++)
    {
      if (i==0)
      {
        min=a[i];
        max=a[i];
        continue;
      }
      else{
        if(a[i]<=min){
          min=a[i];
        }
        if (a[i]>=max){
          max=a[i];
        }        
      }  
    }
    return std::make_pair(min,max);



}
void sort012(int a[],int n){

    int*temp = new int[3];
    temp[0]=0;
    temp[1]=0;
    temp[2]=0;
    for (int i = 0; i < n; i++)
    {
      int index=a[i];
      temp[index]=temp[index]+1;
    }
    int num=0;
    for (int i = 0; i <= 2; )
    {
      if (temp[i]==0){
        i++;
        continue;
      }
      else
      {
        a[num]=i;
        temp[i]=temp[i]-1;
        num++;
      } 
    }
    delete temp;
    

}
vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        vector<vector<int>> result;
        for(int i=1;i<n;i++){
            if(A[i]>A[i-1])
            {
                vector<int>temp;
                temp.push_back(i-1);
                temp.push_back(i);
                result.push_back(temp);
            }
        }
        return result;
    }
int is_sorted(vector<int> &arr){
  int prev{INT_MIN};
  for (int i = 0; i < arr.size()-1; i++){
    prev=arr.at(i);
    if (prev>arr.at(i+1))
    {
      return -1;
    }
  }
  return 1;

}
pair<int,int> swap(int a , int b){
    a=a^b;
    b=a^b;
    a=a^b;
    return std::make_pair(a,b);
}
int vecsum(int n,int arr[]){ // recurisve aproach
        if(n==1){
          return arr[0];
        }
        return arr[n-1]+vecsum(n-1,arr);
    
}
int binarysearch(int arr[],int size,int key){
        int high=0,low=0,mid=0;
        high=arr[size-1];
        low=arr[0];
        while (high>low)
        {
            mid=(high+low)/2;
            if (mid==key)
            {
                return key;
            }
            else if (mid>key)
            {
                high=mid;
            }
            else
            {
                low=mid;
            }
        }
        return -1;

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

bool isPalindrome(int x) {
    int rem{0},count{0},ans{0},tens{0},temp{0};
    temp=x;
    if (x<0){return false;}
    else{
        while(temp!=0){
          count++;
          rem=temp%10;
          temp/=10;
          tens++;
        }
        }
        temp=x;
        for (int i = tens-1; i>=0 ; i--)
        {
          rem = temp%10;
          temp/=10;
          ans+=(rem * pow(10,(i)));
        }
        cout<<ans<<el;
      if (x==ans){
        return true;
      }
      else{
        return false;
      }
    
}
vector<int> breakingRecords(vector<int> scores) {
      int prevmin{0},prevmax{0},currscore{0};
      int mxcount{0},mincount{0};
      vector<int> ans;
      prevmin=scores[0];
      prevmax=scores[0];
      for (int i = 1; i < scores.size(); i++){
        currscore=scores.at(i);
        if (currscore>prevmax)
        {
          prevmax=currscore;
          mxcount++;
        }
        else if (currscore<prevmin)
        {
          prevmin=currscore;
          mincount++;
        }
      }
      ans.push_back(mxcount);
      ans.push_back(mincount);
      return ans;
}
int countingValleys(int steps, string path){
    int count{0};
    int st{0};
    for (int i{0}; i<steps; i++){
        if (path[i] == 'U')st++;
        else if (path[i] == 'D')st--;
        if (path[i] == 'U' && st == 0)count++;
    }
    return count;
}
int designerPdfViewer(vector<int> h, string word) {
        int size=word.size(),max{0};
        for (int i = 0; i < size; i++){
          if (h[(word.at(i))-'a']>max)
          {
            max=h[(word.at(i))-'a'];
          }
        }
        return max;
    
}
int workbook(int n, int k, vector<int> arr) {
      int pageno{1},questions{0},speq{0};
      for (int i = 0; i < arr.size(); i++)
      {
        questions=arr.at(i)-k;
        if (pageno<questions){
          
          speq++;
        }
        
      }
      return speq;
       
}
long repeatedString(string s, long n) {
      long int ct{0},ct2{0},ct3{0};
      for (long int i = 0; i < s.size(); i++)
      {
        if (s[i]=='a')
        {
            ct++;
        }
      }
      for (long int i = 0; i < s.size()%n;i++)
      {
        if (s[i]=='a')
        {
            ct2++;
        }
      }
      int temp=s.size();
      while (n!=0)
      {
        temp/=n;
        ct3++;
      }
      if (ct3*s.size()==n)
      {
        return ct3*ct;
      }
      else
      {
        return ct3*ct + ct2;
      }

 
      

}

vector<int> kadanes_algo(vector<int>& nums){ // incomplete

    int max_so_far{INT_MIN},max_ending_here{0};
    for (int i = 0; i < nums.size(); i++)
    {
        max_ending_here+=nums[i];
        if(max_so_far<max_ending_here)max_so_far=max_ending_here;

    }
    return nums;
}

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
  int i{0};      
  while (word1.size()!=1){
    word1[i]+=word1[i+1];
    auto it1=word1.begin()+1;
    word1.erase(it1);
  }
  while (word2.size()!=1)
  {
    word2[i]+=word2[i+1];
    auto it2=word2.begin()+1;
    word2.erase(it2);
  }
  if(word1[0]==word2[0])return true;
  else return false;
}
vector<int> getConcatenation(vector<int>& nums) {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
     int size=nums.size();
      for (int i = 0; i < size; i++){
        nums.push_back(nums[i]);
      }
      return nums;
      
      

     

}



int sum(int a ,int b){
  if(b==0){
  return a;
  }
  return sum(a+=1,b-=1);
}



int main(){

    cout<<4%7<<" "<<3%2;
	return 0;
}