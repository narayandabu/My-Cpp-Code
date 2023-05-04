#include <bits/stdc++.h>
using namespace std;

    
    
int countDigits(int num) {
    int temp=num,rem{0},ct{0};
    while(temp){
        rem=temp%10;
        if(num%rem==0)ct++;
        temp/=10;
    }
    return ct;
}
//https://leetcode.com/problems/count-the-digits-that-divide-a-number/
