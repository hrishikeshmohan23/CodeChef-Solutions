#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,sum=0,f=0;
		cin>>n;
		int arr[n];
		map<int,int> m;
		
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<n;i++)
		{
			m[arr[i]]++;
			arr[i]-=5;
			if(arr[i]==0)
				continue;
			else if(m[arr[i]]>0 && arr[i]==5)
			{
				m[arr[i]]--;
			}
			else if(m[arr[i]]>0 && arr[i]==10)
			{
				m[arr[i]]--;
			}
			else if(m[5]>1 && arr[i]==10)
			m[5]-=2;
			else
			{
				f=1;
				break;
			}
		}
		if(f)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
}
