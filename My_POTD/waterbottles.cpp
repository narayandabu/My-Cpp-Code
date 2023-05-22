#include <bits/stdc++.h>
using namespace std;


    
int numWaterBottles(int numBottles, int numExchange) {
        int ans{0},temp=numBottles;
        ans+=numBottles;
        while(temp>=numExchange){
            if(temp%numExchange!=0){
                ans+=temp/numExchange;
                temp=(temp/numExchange)+temp%numExchange;
            }
            else {
                temp/=numExchange;
                ans+=temp;
            }
        }
        return ans ;
    }



main(){
     

     cout<<numWaterBottles(15,4)<<"\n";
}