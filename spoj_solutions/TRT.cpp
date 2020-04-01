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
ll arr[4000005];
ll x=0;
ll dp[2001][2001];
ll fuc(ll s,ll l,ll c)
{
    x++;
    if(dp[s][l]!=-1)
        return dp[s][l];
if(s==l)
    return arr[s]*c;
else
{
dp[s][l]=max(arr[l]*(c)+fuc(s,l-1,c+1),arr[s]*c+fuc(s+1,l,c+1));
return dp[s][l];
}
}
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll n,i,j;
cin>>n;
for(i=0;i<n;i++)
cin>>arr[i];
for(i=0;i<2001;i++)
{
    for(j=0;j<2001;j++)
        dp[i][j]=-1;
}
cout<<fuc(0,n-1,1)<<"\n";
//cout<<x<<"\n";
}