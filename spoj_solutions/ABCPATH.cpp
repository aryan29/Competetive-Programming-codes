#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
/*
 .d8b.  d8888b. db    db  .d8b.  d8b   db 
d8' `8b 88  `8D `8b  d8' d8' `8b 888o  88 
88ooo88 88oobY'  `8bd8'  88ooo88 88V8o 88 
88~~88 88`8b      88    88~~88 88 V8o88 
88   88 88 `88.    88    88   88 88  V888 
YP   YP 88   YD    YP    YP   YP VP   V8P 
                                          
                                          
*/


///////////////////////////////////////
ll vis[55][55],c=0;
char arr[55][55];
ll dfs(ll a,ll b,ll x,ll n,ll m)
{
     ll i,j;
     if(x>c)
          c=x;
     //cout<<a<<" "<<b<<"\n";
     //cout<<arr[a][b]<<" "<<a<<" "<<b<<"\n";
     //cout<<"Dfs entry\n";
     vis[a][b]=1;
for(i=-1;i<=1;i++)
{
     for(j=-1;j<=1;j++)
     {
          if(vis[a+i][b+j]==0 && (a+i)<=n && (a+i)>0 && (b+j)<=m && (b+j)>0)
               {
                    //cout<<a+i<<" "<<b+j<<" "<<x<<" "<<(ll)arr[a+i][b+j]<<"\n";
                    if(((ll)arr[a+i][b+j])==(x+1))
                    {
                         //cout<<arr[a+i][b+j]<<"\n";
                    dfs(a+i,b+j,x+1,n,m);
               }
               }
     }
}
return c;
}
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll i,j,ma=0,x=0,ans;
while(1)
{
     ll n=0,m=0;
     x++;
     ma=0;
     //cout<<x<<"\n";
cin>>n>>m;
//cout<<n<<" "<<m<<"\n";
if(n==0 && m==0)
     break;
for(i=0;i<=n+2;i++)
{
     for(j=0;j<=m+2;j++)
          {
               arr[i][j]=0;
               vis[i][j]=0;
          }
}
for(i=1;i<=n;i++)
{
     for(j=1;j<=m;j++)
          cin>>arr[i][j];
}
for(i=1;i<=n;i++)
{
     for(j=1;j<=m;j++)
          {
               if((ll)arr[i][j]==65)
               {
                    //cout<<"Call dfs\n";
                   // c=0;
                    //cout<<i<<" "<<j<<"\n";
                    c=0;
                    ans=dfs(i,j,65,n,m)-64;
                    //cout<<ans<<"\n";
                    if(ans>ma)
                         ma=ans;
               }
          }
}
cout<<"Case "<<x<<": "<<ma<<"\n";
}
}