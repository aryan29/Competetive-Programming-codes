#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
/*
 .d8b.  d8888b. db    db  .d8b.  d8b   db 
d8' `8b 88  `8D `8b  d8' d8' `8b 888o  88 
88ooo88 88oobY'  `8bd8'  88ooo88 88V8o 88 
88~~~88 88`8b      88    88~~~88 88 V8o88 
88   88 88 `88.    88    88   88 88  V888 
YP   YP 88   YD    YP    YP   YP VP   V8P 
                                          
                                          
*/


///////////////////////////////////////
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll t,n;
cin>>t;
while(t--)
{
  cin>>n;
  ll i;
  ll arr[1000005]={0};
  ll dp[1000005]={0};
  for(i=0;i<n;i++)
    cin>>arr[i];
  dp[n-1]=arr[n-1];
  dp[n-2]=arr[n-2]+arr[n-1];
  dp[n-3]=dp[n-2]+arr[n-3];
  for(i=n-4;i>=0;i--)
    dp[i]=max(arr[i]+dp[i+2],max(arr[i]+arr[i+1]+dp[i+4],arr[i]+arr[i+1]+arr[i+2]+dp[i+6]));
  cout<<dp[0]<<"\n";
}
}