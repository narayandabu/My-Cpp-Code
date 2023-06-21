#include <bits/stdc++.h>
using namespace std;
 
 
 



bool hi(int n){
            int rem=0;
        int t2=2*n,t3=3*n;
        int arr[10]={};
        while(t3!=0){
            rem=n%10;
            if(rem==0)return false;
            arr[rem]++;
            rem=t2%10;
            if(rem==0)return false;
            arr[rem]++;
            rem=t3%10;
            if(rem==0)return false;
            arr[rem]++;
            n/=10;t2/=10;t3/=10;
        }
        for(int i=1;i<10;i++){
            if(arr[i]!=1){
                cout<<arr[i]<<" "<<i<<endl;
                return false;
            
            }
        }
        return true;
}

int longestSemiRepetitiveSubstring(string s) {
    int ct{0},mini,flag=0;
    char c;
    s+='q';
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1] and flag==0){
            flag=1;
            ct+=2;       
            c=s[i];
        }
        else if((s[i]==s[i+1] and flag) and c!=s[i]){
            ct++;
            c=s[i];
        }
        else if(c!=s[i]){
            ct++;
            c='k';    
        }
    }
    return ct;

    }

int main(){
    unordered_map<int,int> mp;
    mp[1]=1;
    auto it=mp.find(2);
    cout<<(*it).second;


    return 0;
}