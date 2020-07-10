#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m2=INT_MIN,m1=INT_MAX,count=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<n;i++)
		{
			count=0;
			for(int j=i+1;j<n;j++)
			{
				if(a[j]-a[j-1]<=2)
					count++;
				else
				break;
					
					
			}
			for(int j=i-1;j>=0;j--)
				if(a[j+1]-a[j]<=2)
					count++;
				else
					break;
			m1=min(m1,count);
			m2=max(m2,count);
		}
		cout<<m1+1<<" "<<m2+1<<endl;
	}
}
