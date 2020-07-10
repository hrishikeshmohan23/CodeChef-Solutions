#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,sum=0;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		reverse(a,a+n);
		for(int i=0;i<n;i++)
		{
			if(a[i] && ((a[i]-i)>0))
			{
				sum+=(a[i]-i);
			}
			sum=sum%1000000007;
		}
		sum=sum%1000000007;
		cout<<sum<<endl;
	}
}
