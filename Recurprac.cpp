#include <bits/stdc++.h>
using namespace std;
 

//1>  https://leetcode.com/problems/k-th-symbol-in-grammar/

void inverse(string &a){
    for(int i=0;i<a.size();i++){
        if(a[i]=='1')a[i]='0';
        else a[i]='1';
    }
}
string generate(int n){
    if(n==2)return "01";
    string a,ainv;
    a=generate(n-1);
    ainv=generate(n-1);
    inverse(ainv);
    return(a+ainv);
}
int kthGrammar(int n, int k) {
    if(n==1 and k==1)return 0;
    else{
        string a=generate(n);
        return (int)(a[k-1]-'0');
    }
}
//2>  https://leetcode.com/problems/subsets/
vector<vector<int>> ver;
void generatesub(vector<int>& nums,int i,vector<int> &empty){
    if(i==nums.size()){
        ver.push_back(empty);
        return ;
    }
    generatesub(nums,i+1,empty);
    empty.push_back(nums[i]);
    generatesub(nums,i+1,empty);
    empty.pop_back();
}
void vecofvecpr(vector<vector<int>> v){
    for(vector<int> i:v){
        cout<<" [ ";
        for(int j:i)cout<<j<<" ";
        cout<<"] ";
    }
    return;
}


// vector<vector<int>> subsets(vector<int>& nums) { 
// }
int fibbo(int n){
    if(n<=1)return 1;
    else{
        int nth;
        for(int i=0;i<n;i++){
            nth = fibbo(i-1);
            
        }
        cout<<nth<<" ";
    }
}



int main()
{
//     vector<int> v{1,2,3},g;
//     generatesub(v,0,g);
//     vecofvecpr(ver);
        int n;
        cin>>n;
        // for(int i=0;i<n;i++)cout<<fibbo(i)<<" ";
        fibbo(n);
    return 0;
}



