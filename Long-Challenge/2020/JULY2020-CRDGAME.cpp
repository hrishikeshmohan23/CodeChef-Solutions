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
		ll n,p1=0,p2=0;
		cin>>n;
		while(n--)
		{
			ll a,b,s1=0,s2=0;
			cin>>a>>b;
			while(a!=0 || b!=0)
			{
				s1+=a%10;
				s2+=b%10;
				b/=10;
				a/=10;
			}
			if(s1>s2)
				p1++;
			else if(s2>s1)
				p2++;
			else
			{
				p1++;
				p2++;
			}
		}
		if(p1>p2)
			cout<<0<<" "<<p1<<endl;
		else if(p2>p1)
			cout<<1<<" "<<p2<<endl;
		else
			cout<<2<<" "<<p1<<endl;
		
	}
	return 0;
}

