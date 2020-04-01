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
long double ans[101][101];
while(1)
{
ll n,m,i,j,k,a,b,x;
cin>>n>>m;
if(n==0)
break;
memset(ans, 0, sizeof(ans));
while(m--)
{
  cin>>a>>b>>x;
  ans[a-1][b-1]=x/100.0;
  ans[b-1][a-1]=x/100.0;
}
for(k=0;k<n;k++)
{
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      //cout<<i<<" "<<j<<" "<<ans[i][j]<<"\n";
      ans[i][j]=max(ans[i][j],ans[i][k]*ans[k][j]);
      //cout<<i<<" "<<j<<" "<<ans[i][j]<<"\n";
    }
  }
}
cout<<fixed;
cout<<ans[0][n-1]*100.0<<setprecision(6)<<" "<<"percent\n";
}
}