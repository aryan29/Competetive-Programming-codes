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
	int n,k;
		cin>>n>>k;
		int ans = INT_MAX;
		for(int i=1;i<=sqrt(n);i++){
			if(n%i==0 && i<=k){
				ans = min(ans,n/i);
				if(n/i<=k){
					ans = min(ans,i);
				}
			}
		}
		cout<<ans<<endl;
	}
}