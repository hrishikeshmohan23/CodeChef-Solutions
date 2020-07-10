#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,x=0,y=0;
		string s;
		cin>>s;
		n=s.size();
		for(int i=0;i<n;i++)
		{
			if(s[i]=='x' && s[i+1]=='y')
			{
				x++;
				i++;
			}
			else if(s[i]=='y' && s[i+1]=='x')
			{
				x++;
				i++;
			}
		}
		cout<<x<<endl;
		
	}
}
