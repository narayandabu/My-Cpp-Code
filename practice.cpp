#include <bits/stdc++.h>
using namespace std;
#define el endl
#define nl "\n" 
#define d cout<<"debug"<<nl;
#define forn for(int i=0;i<n-1;i++)
#define forv for(int i=0;i<v.size();i++)
#define sortv sort(v.begin(),v.end())
#define vecv vector<int> v
#define ll long long
#define lld unsigned long long
 
void solve(){
	int n;
	cin >> n;
	if(n%2 != 0 && n != 1)
	{
		cout << -1 << '\n';
		return;
	}
	bool flag = false;
	for(int i = 1 ; i < n ; i += 2){
		if(!flag)
		{
			cout << i << ' ' << i + 1 << ' ';
			flag = !flag;
		}else 
		{
			cout << i + 1 << ' ' << i << ' ';
			flag = !flag;
		}
	}
	if(n % 2 == 1)
	{
		cout << n << ' ';
	}
	cout << '\n';
	return;
}
 
 
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t;
      cin>>t;
      while(t--){
        cout<<"Testcase Number: "<<t<<nl;
        solve();
        }
      return 0;
}

