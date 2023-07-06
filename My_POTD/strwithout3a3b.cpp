#include <bits/stdc++.h>
using namespace std;
 
 
 
string strWithout3a3b(int a, int b) {

        string str;
    while(a>0 or b>0){
        int size=str.size();
        bool doA=false;
        if(size>=2 and str.at(size-1)==str.at(size-2)){
            if(str.at(size-1)=='b')doA=true;
        }
        else if(a>=b)doA=true;
        if(doA){
            str.push_back('a');
            a--;
        }
        else {
            str.push_back('b');
            b--;
        }
    }
    return str;


}