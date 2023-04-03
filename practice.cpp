#include <bits/stdc++.h>
using namespace std;




main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int m,n,k,a,b,c,tempn,tempm,val;
        vector<int> ks;
        vector<int> abc;
        cin>>tempn>>tempm;
        m=tempm;
        n=tempn;
        while(n--){
            cin>>k;
            ks.push_back(k);
        }
        while(m--){
            cin>>a>>b>>c;
            abc.push_back(a);
            abc.push_back(b);
            abc.push_back(c);
        }
        for (int j = 0; j < tempm; j++){
            bool x=true;
            for (int i = 0; i < ks.size(); i++){
             val=(((abc[j+1]-ks[i])*(abc[j+1]-ks[i]))-(4*abc[j]*abc[j+2]));
             cout<<i<<" "<<j<<" "<<val<<"\n";
             if(val<0){
                cout<<"YES\n"<<ks[i]<<"\n";
                x=false;
                continue;
             }
            }
            if(x)cout<<"NO\n";
        }
        
        
    }
}