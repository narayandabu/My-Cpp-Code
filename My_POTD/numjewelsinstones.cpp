#include <bits/stdc++.h>
#define el endl;
using namespace std;





int numJewelsInStones(string jewels, string stones) {
        
      map<char,int> letters;
      int count{0};
      for (int i = 0; i < stones.size(); i++){
         letters[stones.at(i)]++;
      }
      for (int i = 0; i < jewels.size(); i++){
        if (letters.find(jewels.at(i))!=letters.end()){
          count+=(*(letters.find(jewels.at(i)))).second;
        }
      }
}
//https://leetcode.com/problems/jewels-and-stones/