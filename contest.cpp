#include <bits/stdc++.h>
using namespace std;
#define el endl
#define d cout<<"debug\n";
#define nl "\n"

 
int maximumValue(vector<string>& strs) {
      int value{0};
      for (string i: strs){
            bool flag=false;
            int size=i.size();
            for(char c:i){
                  if(isalpha(c)){
                        flag=true;
                        break;
                  }
            }
            if(flag)value=max(value,size);
            else value=max(value,stoi(i));    
      }
      return value;
    }



int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t=0;
      // cin>>t;
      while(t--){
           
      }
      cout<<'9'-'0';
      return 0;
}



