#include <bits/stdc++.h>
using namespace std;


main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<int,int> m;
    m[0]=1;
    m[7]=5;
    cout<<(*m.find(0)).second;
}
