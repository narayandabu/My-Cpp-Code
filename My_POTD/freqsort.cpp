#include <bits/stdc++.h>
using namespace std;

unordered_map<char,int> m;
bool Swap_is_the_new_game(char a,char b){

    if((*m.find(a)).second==(*m.find(b)).second){
        return a>b;
    }
    return ((*m.find(a)).second>(*m.find(b)).second);
    

}


string frequencySort(string s) {

    for(char c:s){
        m[c]++;
    }
    sort(s.begin(),s.end(),Swap_is_the_new_game);



}