#include <bits/stdc++.h>
using namespace std;
#define nl "\n" 
#define d cout<<"debug"<<nl;
#define forn for(int i=0;i<n;i++)
#define forv for(int i=0;i<v.size();i++)
#define sortv sort(v.begin(),v.end())
#define vecv vector<int> v
#define ll long long
#define lld unsigned long long
#define fora(i,n,k) for(int i=k;i<n;i++)
 
 
set<int> visted;
void dfs(vector<int> graph[],int nodes,int vertex){

      



}

void printgraph(vector<int> grp[],int size){
      for (int j = 0; j < size+1; j++){
      for (int i = 0; i < grp->size()+1; i++){
            // cout<<"hi";
                  cout<<grp[i][j]<<" ";
            }
            cout<<nl;
      }
      return ;
      

}

int main(){
      // ios_base::sync_with_stdio(false);
      // cin.tie(NULL);
      int n/*vertices*/,m/*edges*/;
      cin>>n;
      int node,numofspreads;
      vector<int> grp[n+1];
      // grp[0].push_back(0);
      for (int i = 0; i < n; i++){
         cin>>node>>numofspreads;
         for (int j = 0; j < numofspreads; j++){
            int temp;
            cin>>temp;         
            grp[node].push_back(temp);
         }
      }
      for (int j = 1; j < n+1; j++){
            cout<<j;
      for (auto i:grp[j]){
                  cout<<"->"<<i;
            }
            cout<<nl;
      }
      
      

      return 0;
}