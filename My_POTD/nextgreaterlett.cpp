#include <bits/stdc++.h>
using namespace std;

char nextGreatestLetter(vector<char>& letters, char target) {
    
    int high=letters.size()-1,low{0},mid{0};
    while (high>low){
        mid=(high+low)/2;
        if(letters[low]>target){
            return letters[low];
        }
        else if(letters[mid]>target){
            high=mid;
        }
    }
    return letters[0];
}