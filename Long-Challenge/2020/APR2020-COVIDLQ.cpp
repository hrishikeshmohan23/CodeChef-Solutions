#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,f=0,count=0;
		cin>>n;
		int a[n];
		map<int,int> m;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==1)
			{
				count++;
				m[count]=i;
			}
		}
		for(int i=1;i<count;i++)
		{
			if(m[i+1]-m[i]<6)
			{
				f=1;
				break;
			}
		}
		if(f==1)
		cout<<"NO\n";
		else
		cout<<"YES\n";
			
	}
}
