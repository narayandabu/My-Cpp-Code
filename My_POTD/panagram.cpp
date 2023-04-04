#include <bits/stdc++.h>
using namespace std;
#define el endl

bool checkIfPangram(string sentence) {
    int arr[26]={ };
    for (int i = 0; i < sentence.size(); i++){
        arr[sentence[i]-'a']++;
    }
    for (int i = 0; i < 26; i++){
        if (arr[i]<1)return false;
    }
    return true;

}
//https://leetcode.com/problems/check-if-the-sentence-is-pangram/
 
