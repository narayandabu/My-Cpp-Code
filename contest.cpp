#include <bits/stdc++.h>
using namespace std;
#define el endl




void revarr(int l,int r,int *arr){
      if(l>=r) return;
      swap(arr[l],arr[r]);
      l++;
      r--;
      revarr(l,r,arr);
}
void printarr(int arr[],int size){
      for (int i = 0; i < size; i++){
            cout<<arr[i]<<" ";
      }
      cout<<el;
}
bool ispalindrome(int l,int r,string s){
      if(l>=r) return true;
      if(s[l]!=s[r])return false;
      l++;
      r--;
      return ispalindrome(l,r,s);
}
int fibbonacci(int n){
      if(n<=2)return 1;
      else return fibbonacci(n-1)+fibbonacci(n-2); 
}




 
int main(){
      // int arr[]={1,2,3,4};
      // printarr(arr,4);
      // revarr(0,3,&arr[0]);
      // printarr(arr,4);
      // if(ispalindrome(0,3,"abba"))cout<<"TRUE";
      // else cout<<"FALSE";
      
            
      return 0;
   
    
    
      
}

