#include <bits/stdc++.h>
using namespace std;


bool is_cyclic=false;
void dfs(int v,int root,int prev,unordered_map<int,bool> &vis,vector<unordered_set<int>> &grp){
  if(vis[v]==false){
    vis[v]=true;
    for(auto it=grp[v].begin();it!=grp[v].end();it++){
      if(!vis[*it]){
        dfs(*it,root,v,vis,grp);
      }
      if(*it==root and root!=prev){
        cout<<v<<" "<<root<<" "<<prev<<" ";
        is_cyclic=true;
      }
    }
  }
}









int main(){

  int n,idx{0}; 
  cin>>n;
  unordered_map<int,bool> visited;
  vector<unordered_set<int>> grp(n+1);
  for(int i=1;i<=n;i++)visited[i]=false;
  grp.push_back({0});
  for(int i=1;i<=n;i++){
    int temp;
    cin>>temp;
    grp[i].insert({temp});
    // grp[temp].insert({i});
  }
  for(unordered_set<int> v:grp){
    cout<<idx<<"->";
    for(int i:v){
      cout<<i<<" ";
    }
    cout<<endl;
    idx++;
  }
  cout<<endl;
  for(int i=1;i<=n;i++)dfs(i,i,i,visited,grp);
  if(is_cyclic)cout<<"YES\n";
  else cout<<"NO\n";





  return 0;
}