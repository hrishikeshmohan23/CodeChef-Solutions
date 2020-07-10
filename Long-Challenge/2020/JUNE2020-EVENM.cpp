#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
void Wiggly(int n)  //Function to print the matrix in wiggly format
{
	int i,j=0,a[n][n];
		int count=1,m=n;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				a[i][j]=count;
				count++;
			}
		}
		j=0;	
	for (i=0;i<n;i++)
	{
		if(i%2==0) 
		{ //If i is divisible by 2 then we iterate from 0 to m-1 printing the a[i][j] element
			while(j<m)
			{
				printf("%d ",a[i][j]);
				j++;
			}
			printf("\n");
		}
		else      //If i is divisible by 2 then we iterate from m-1 to 0 printing the a[i][j] element
		{	j--;
			while(j>=0)
			{
				printf("%d ",a[i][j]);
				j--;
			}
			printf("\n");
			j++;
		}

	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
	
		
		Wiggly(n);
	}
}
