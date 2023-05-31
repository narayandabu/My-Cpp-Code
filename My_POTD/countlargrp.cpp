#include <bits/stdc++.h>
using namespace std;

int arr[37];
int countLargestGroup(int n) {
    int temp,sum{0},ct{0},rem{0},ans{0};
    for(int i=1;i<=n;i++){
        temp=i;
        sum=0;
        while(temp!=0){
            rem=temp%10;
            sum+=rem;
            temp/=10;
        }
        arr[sum]++;
    }
    for (int i = 0; i < 37; i++)ct=max(ct,arr[i]);
    for(int i=0;i<37;i++){
        if(arr[i]==ct)ans++;
        arr[i]=0;
    }
        return ans;
}

