#include <bits/stdc++.h>
using namespace std;
 
 
 
bool cmpstk(stack<char> &ss,stack<char> &tt){
    if(ss.size()!=tt.size()) return false;
    string str="";int i=0;
    while(!ss.empty()){
        str+=ss.top();
        ss.pop();
    }
    while(!tt.empty()){
        if(str[i]!=tt.top())return false;
        tt.pop();i++;
    }
    return true;
}
void trvstk(stack<char> &st){
        while (!st.empty()){
            cout<<st.top();st.pop();
        }
        cout<<endl;
}

bool backspaceCompare(string s, string t) {
    stack<char> ss,tt;
    for(char c:s){
        if(c=='#' and !ss.empty())ss.pop();
        else if(c!='#') ss.push(c);
    }
    for(char c:t){
        if(c=='#' and !tt.empty())tt.pop();
        else if(c!='#') tt.push(c);
    }
    return cmpstk(ss,tt);
}
bool backspaceCompare(string s, string t) {
    int l=0;
    



}



int main(){
    cout<<backspaceCompare("a##c","#a#c");
    return 0;
}