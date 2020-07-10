#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a[3],b[3];
		set<int> s;
		cin>>a[0]>>a[1]>>a[2]>>b[0]>>b[1]>>b[2];
		for(int i=0;i<3;i++)
		{
			if(b[i]-a[i])
				s.insert(b[i]-a[i]);
		}
		cout<<s.size()<<endl;
	}
}
