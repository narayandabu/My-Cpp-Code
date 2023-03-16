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
      for (int i = 0; i < dictionary.size(); i++){
          sort(dictionary.at(i).begin(),dictionary.at(i).end());
      }
      sort(dictionary.begin(),dictionary.end());
      for (int i = 0; i < query.size(); i++){
        sort(query.at(i).begin(),query.at(i).end());
      }
      for (int i = 0; i < query.size(); i++)
      {
            temp=0;
            for (int j = 0; j < dictionary.size(); j++)
            {
                  if (query[i]==dictionary[j])
                  {
                        temp++;
                  }  
            }
            ans.push_back(temp);
      }
      return ans;

}



        
       
      





 
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      map<string,int> mp;
      mp["abs"]++;
      mp["sba"]++;
      for (auto i = mp.begin(); i !=mp.end() ; i++)
      {
            cout<<(*i).second;
      }
      
      
}