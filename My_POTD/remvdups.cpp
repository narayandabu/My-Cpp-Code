#include <bits/stdc++.h>
using namespace std;
 
string stcktrav(stack<char> st){
    string a;
    while(!st.empty()){
        a+=st.top();
        st.pop();
    }
    reverse(a.begin(),a.end());
    return a;
}
string removeDuplicates(string s){
    stack<char> st;
    string ans;
    for (char c:s){
        if(st.empty() or st.top()!=c)st.push(c);
        else st.pop();
    }
    return stcktrav(st);
}