#include <iostream>
#include <vector>


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
    
}


vector<int> subarraySum(vector<int>arr, int n, long long s){

      int counter1=0,counter2=0;
      for (int i = 0; i < n; i++)
      {
        if(arr[i]+arr[i+1] < s){
            counter2=i;
            continue;
        }
        else
        {
          break;
        }
      }
      vector<int> subarray




}


int main (){
     

     
       return 0;
}