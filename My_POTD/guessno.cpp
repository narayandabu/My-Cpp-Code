#include <bits/stdc++.h>
using namespace std;


/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */
long long guess(long int val){//builtin ApI
}
class Solution {
public:
    int guessNumber(int n) {
        long mid{0},high=n,low{1};
        if(n==1)return 1;
        while(high>=low){
            mid=(high+low)/2;
            if(guess(mid)==0)return mid;
            else if(guess(mid)==-1) high=mid;
            else low=mid+1;
        }
        return -1;
    }
};
//https://leetcode.com/problems/guess-number-higher-or-lower/submissions/