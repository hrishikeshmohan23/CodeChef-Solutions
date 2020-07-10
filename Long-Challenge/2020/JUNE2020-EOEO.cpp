#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long x,count=0,count1=0;
		cin>>x;
		if(x%2)
		cout<<x/2<<endl;
		else
		{
			long long n=x,y=1;
			if(x==2)
			cout<<0<<endl;
			else
			{
				while(x%2==0)
				{
					y*=2;
					x/=2;
					count++;
				}
				y*=2;
				if((y/2)==n)
				cout<<0<<endl;
				else
				cout<<(x/2)<<endl;
			}
		}
	}
}
