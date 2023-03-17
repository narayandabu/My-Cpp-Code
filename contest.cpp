#include <bits/stdc++.h>
using namespace std;
#define el endl
 
 
long minTime(vector<int> files, int numCores, int limit) {
      long ans{0};
      sort(files.begin(),files.end());
      int end=files.size()-1,size{0};
      if (limit>files.size())
      {
            size=files.size();
      }
      else
      {
            size=limit;
      }
      for (int i = 0; i < size; i++)
      {
       if(files[end-i]%numCores==0)files[end-i]/=numCores;
            
      }
      for (int i = 0; i <=end; i++)
      {
            ans+=files[i];
      }
}
vector<int> stringAnagram(vector<string> dictionary, vector<string> query) {
      vector<int> ans;
      int temp{0};
      map<string,int> mp;
      for (int i = 0; i < dictionary.size(); i++){
          sort(dictionary.at(i).begin(),dictionary.at(i).end());
      }
      for (int i = 0; i < query.size(); i++){
        sort(query.at(i).begin(),query.at(i).end());
      }
      for (int i = 0; i < dictionary.size(); i++){
            mp[dictionary.at(i)]++;
      }
      for (int i = 0; i < query.size(); i++)
      {
            auto it=mp.find(query.at(i));
            if (it!=mp.end())
            {
              ans.push_back((*it).second);                  
            }
            else
            {
                  ans.push_back(0);
            }
      }
      return ans;

}





        
       
      





 
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t=0;
      cin>>t;
      while(t--){
         int x{0},y{0};
         cin>>x>>y;
      }
      return 0;
      
      
      
      
}