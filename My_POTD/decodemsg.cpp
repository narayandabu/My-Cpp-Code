#include <bits/stdc++.h>
#define el endl;
using namespace std;







string decodeMessage(string key, string message) {
        vector<int> hash_arr(26,-1);
        for (int i = 0,k=0; i < key.size(); i++){
            if(key.at(i)!=' ' and hash_arr[key[i]-'a']==-1){
            hash_arr[key[i]-'a']=k++;
            }
        }
        for (int i = 0; i < message.size(); i++){
            if(message.at(i)!=' '){
                message[i]=((hash_arr[message[i]-'a'])+'a');
            }
        }
        return message;
}
string decodeMessage(string key, string message) {
        unordered_map<char,char> m;
        char letter='a';
        string ans;
        for (int i = 0; i < key.size(); i++){
            if(key.at(i)!=' ' and m.find(key.at(i))==m.end()){
            m[key.at(i)]=letter;
            letter++;
            }
        }
        for (int i = 0; i < message.size(); i++){
            if(message.at(i)!=' '){
                auto it =m.find(message.at(i));
                ans.push_back((*it).second);
            }
            else ans.push_back(' ');
        }
        return ans;
    }