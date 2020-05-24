#include <iostream>
#include<bits/stdc++.h>

using namespace std;


int main() 

{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	char a[n][n];int c=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
         cin>>a[i][j];
		}
	}
	c=0;
    for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
         if(a[i][j]=='0')
         	c++;
         if(a[i][j]=='1')
         {
         	if(i==n-1||j==n-1)
         		c++;
         	else if(a[i+1][j]=='1'||a[i][j+1]=='1')
         		c++;
         }

		}
	}
	
    if(c==n*n)
    	cout<<"YES\n";
    else
    	cout<<"NO\n";
	}
}