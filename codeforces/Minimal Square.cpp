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
	 int a,b;
	 cin>>a>>b;
	if(a<b)
		a=a*2;
	else
		b=b*2;
	int m=max(a,b);
	cout<<m*m<<"\n";
	}
}
