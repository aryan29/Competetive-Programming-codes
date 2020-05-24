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
	 int ce=0,co=0;
	 for(int i=0;i<n;i++)
	 {
	 	cin>>a[i];
	 	if(a[i]%2==1)
         ce++;
        else
         co++;
	 }
	 sort(a,a+n);
	 int c=0;
	 for(int i=0;i<n-1;i++)
	 {
	 	if(a[i+1]-a[i]==1)
	 		c++;
	 }
	 if(ce%2==0&&co%2==0)
	 {
	 	cout<<"YES\n";
	 }
	 else
	 {
	 	if(c!=0)
	 	cout<<"YES\n";
	 	else
	 	cout<<"NO\n";
	 }
	}
}