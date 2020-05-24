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
	 int a[n];
	 for(int i=0;i<n;i++)
	 {
	 	cin>>a[i];
	 }
	 sort(a,a+n);
	 int min=INT_MAX;
	 for(int i=0;i<n-1;i++)
	 {
	 	if(a[i+1]-a[i]<min)
	 		min=a[i+1]-a[i];
	 }
	 cout<<min<<"\n";
	}
}