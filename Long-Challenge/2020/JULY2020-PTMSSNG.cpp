#include <bits/stdc++.h>

#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	// cin.ignore(); must be there when using getline(cin, s)
	while(T--)
	{
		ll n;
		cin>>n;
		unordered_set<ll> s1,s2;
		for(int i=0;i<(4*n)-1;i++)
		{
			ll x,y;
			cin>>x>>y;
			if(s1.count(x)) 
			s1.erase(x);
			else	
			s1.insert(x);
			if(s2.count(y)) 
			s2.erase(y);
			else	
			s2.insert(y);
			
		}
		cout<<(*s1.begin())<<" "<<(*s2.begin())<<endl;
	}
	return 0;
}
