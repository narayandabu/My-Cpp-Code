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










vector<int> kadanes_algo(vector<int>& nums){ // incomplete

    int max_so_far{INT_MIN},max_ending_here{0};
    for (int i = 0; i < nums.size(); i++)
    {
        max_ending_here+=nums[i];
        if(max_so_far<max_ending_here)max_so_far=max_ending_here;

    }
    return nums;
}
int main(){
    
      




	return 0;
}