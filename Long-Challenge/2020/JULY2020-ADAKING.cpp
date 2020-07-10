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
		ll k;
		cin>>k;
		cout<<"O";
		ll n=k;
		n--;
		int l=1,p=1;
		while(n!=0)
		{
			cout<<".";
			p++;
			l++;
			n--;
			if(!(l%8) && l!=0)
			{
				l=0;
				cout<<endl;
			}
		}
		
		ll x=(p/8);
		ll y=(p%8);
		while(x!=8)
		{
			for(int j=y;j<8;j++)
			{
				cout<<"X";
			}
			cout<<endl;
			break;
		}
			
		for(int i=x+1;i<8;i++)
		{
			for(int j=0;j<8;j++)
				cout<<"X";
			cout<<endl;
		}
		}
		
	return 0;
}

