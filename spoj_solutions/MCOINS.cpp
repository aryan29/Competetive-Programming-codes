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
ll k,l,n,i,x,m;
cin>>k>>l>>m;
ll arr[100005];
ll dp[1000005]={0};
for(i=1;i<=m;i++)
cin>>arr[i];
//if dp[x] is odd A else B
dp[1]=1;
for(i=2;i<=1000000;i++)
{
    x=1;
    //cout<<i<<" X is "<<x<<"\n";
if(i>=l && i>=k)
{
    if(dp[i-1]%2!=x || dp[i-k]%2!=x || dp[i-l]%2!=x)
        dp[i]=x;
    else
        dp[i]=x+1;
}
else if(i>=l && i<=k)
{

    if(dp[i-1]%2!=x ||  dp[i-l]%2!=x)
        dp[i]=x;
    else
        dp[i]=x+1;
}
else if(i<=l && i>=k)
{
    //cout<<"Hello "<<i<<"\n";
    if(dp[i-1]%2!=x ||  dp[i-k]%2!=x)
        dp[i]=x;
    else
        dp[i]=x+1;
    //cout<<dp[i]<<"\n";
}
else if(i<=l && i<=k)
{
    if(dp[i-1]%2!=x)
        dp[i]=x;
    else
        dp[i]=x+1;
}
}
for(i=1;i<=m;i++)
{
    if(dp[arr[i]]%2==1)
        cout<<'A';
    else
        cout<<'B';
}
}