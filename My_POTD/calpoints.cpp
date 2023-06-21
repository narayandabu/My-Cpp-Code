#include <bits/stdc++.h>
using namespace std;
#define de(x) cout<<x<<endl;
 
int stacksum(stack<int> &s){
    int sum{0};
    while(!s.empty()){sum+=s.top();s.pop();}
    return sum;
}
int calPoints(vector<string>& operations) {
     int sum=0;   
    stack<int> s;
  for(int i = 0; i < operations.size(); i++){
    if(isdigit(operations[i][0]) or isdigit(-1*operations[i][0])){
        de(sum);
        int x=stoi(operations[i]);
        s.push(x);
    }
    else if(operations[i]=="C"){
        s.pop();
    }
    else if(operations[i]=="D"){
        int x=2*s.top();
        s.push(x);
    }
    else{
        int curr=s.top(),add{0};
        s.pop();
        add=curr+s.top();
        s.push(curr);
        s.push(add);
    }
    }
    sum=stacksum(s);
    return sum;
}
