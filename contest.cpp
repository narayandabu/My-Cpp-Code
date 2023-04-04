#include <bits/stdc++.h>
using namespace std;
#define el endl
 

int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      long long num{0},ct4{0},ct7{0};
      cin>>num;
      while(num!=0){
            if(num%10==7)ct7++;
            else if(num%10==4)ct4++;
            num/=10;
      }
      if(((ct7+ct4)==7) or ((ct7+ct4)==4)) cout<<"YES\n";
      else cout<<"NO\n";
      return 0;
}

