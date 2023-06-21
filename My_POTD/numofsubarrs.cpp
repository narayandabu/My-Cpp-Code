#include <bits/stdc++.h>
using namespace std;
 
// Brute  T.C:-O(n*k) S.P:-O(1)
// int numOfSubarrays(vector<int>& arr, int k, int threshold) {
//     int size=arr.size(),sum{0},ans{0};
//     for(int i = 0; i < size; i++){
//         sum=0;
//         if(k+i<=size){
//         for (int j = i; j < k+i; j++)sum+=arr[j];
//         if(sum>=(k*threshold))ans++;
//         }
//     }
//     return ans;
// }
 

//Optimal T.C:-O(n) S.P:-O(n) 
// int numOfSubarrays(vector<int>& arr, int k, int threshold) {
//     int size=arr.size(),sum{0},ans{0},idx{0};
//     vector<int> prefixsum;
//     prefixsum.push_back(0);
//     for(int i = 0; i < size; i++){
//         sum+=arr[i];
//         prefixsum.push_back(sum);
//     }
//     for(int i = k; i < prefixsum.size(); i++,idx++)if(prefixsum[i]-prefixsum[idx]>=k*threshold)ans++;
//     return ans;
// }

//Optimised T.C:-O(n) S.P:-O(1)

int numOfSubarrays(vector<int>& arr,int k,int threshold){
    int hi{0},low{0},size=arr.size(),sum{0},ct{0},flag{0};
    while(hi!=(size) and low<=size-2){
        sum+=arr[hi];
        if(hi>k-1){
            flag=1;
            if(sum>=(k*threshold))ct++;
            if(flag){
            sum-=arr[low];
            // if(sum>=(k*threshold)){ct++;}
            low++;
            }
        }
        
        hi++;
    }
    return ct;    
}





int main(){
    vector<int> v{2,2,2,2,5,5,5,8};
    //            2 4 6 6 9 12 15 18
    //            0  1   2  3  4  5 6  7  8  9
    vector<int> c{11,13,17,23,29,31,7, 5, 2, 3};
    //            11 24 41 53 69 83 67 43 38 34              
    cout<<numOfSubarrays(c,3,5);


}