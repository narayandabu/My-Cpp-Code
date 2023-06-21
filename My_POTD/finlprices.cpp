#include <bits/stdc++.h>
using namespace std;
 
 
 
   vector<int> finalPrices(vector<int>& prices) {
        int size=prices.size(),minval{0};
        stack<int> stk;
        // vector<int> v;
        // for(int i=0;i<size;i++){
        //     for(int j=i+1;j<size;j++){
        //         if(prices[j]<=prices[i]){
        //             prices[i]-=prices[j];
        //             break;
        //         }
        //     }
        // }
        for(int i=size-1;i>0;i--){
            stk.push(prices[i]);
        }
        for(int i=0;i<size;i++){
            if(stk.top()<=prices[i]){
                prices[i]-=stk.top();
            }
            if(!stk.empty())stk.pop();
        }
        return prices;
    }
int distanceTraveled(int mainTank, int additionalTank) {
    if (mainTank<5)return mainTank*10;
    int ans=0;
    while (mainTank!=0){
        if(mainTank>=5){
            mainTank-=5;
            ans+=50;
            if(additionalTank!=0){
                mainTank++;
                additionalTank--;
            }
        }
        else{
            ans+=(mainTank*10);
            mainTank=0;
        }
    }
    return ans;
}
  int specialPerm(vector<int>& nums) {
        int mod=1e9+7;
    }
int main(){
    cout<<distanceTraveled(6,2);
    return 0;
}
