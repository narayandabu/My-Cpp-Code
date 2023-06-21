#include <bits/stdc++.h>
using namespace std;
 
 
vector<int> finalPrices(vector<int>& prices) {
    //BRUTE
    int size=prices.size(),minval{0},i=0,j=1;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(prices[j]<=prices[i]){
                prices[i]-=prices[j];
                break;
            }
        }
    }
    return prices;
    //OPTIMIZED
    while(j<size and j>i){
        if(prices[j]<=prices[i]){
            prices[i]-=prices[j];
            i++;
            j=i+1;
        }
        else{
            if(j==size-1){
                i++;
                j=i+1;
            }
            else j++;
        }

    }
    return prices;
}