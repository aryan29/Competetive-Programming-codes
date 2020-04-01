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
ll m[4]={1,1,0,1};
ll m1[4]={0,1,1,-1};
ll dp[1000000][3];
ll arr[1000000][3],n;
ll check(ll i,ll j)
{
  if(i>n || j>3 || j<1 || i<1)
    return 0;
  else
    return 1;
}
ll fuc(ll x,ll y)
{
  ll ans=mod+1;
  ll i,j;
  if(x==n && y>2)
  {
      return mod;
  }
  if(x==n && y==2)
  {
    dp[n][2]=arr[n][2];
    return arr[n][2];
  }
  if(dp[x][y]<mod)
  {
    return dp[x][y];
  }
  for(i=0;i<4;i++)
  {
    if(check(x+m[i],y+m1[i])==1)
    {
      ans=min(ans,fuc(x+m[i],y+m1[i]));
    }
  }
  dp[x][y]=arr[x][y]+ans;
  return dp[x][y];
}
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll i,j,c=0;
while(1)
{
  cin>>n;
  if(n==0)
    break;
  for(i=1;i<=1000000;i++)
  {
    for(j=1;j<=3;j++)
      dp[i][j]=mod;
  }
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=3;j++)
       cin>>arr[i][j];
  }
  c++;
cout<<c<<". "<<fuc(1,2)<<"\n";
}
}