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
ll vis[8][8];
bool isInside(ll x,ll y)
{
  if(x>=1 && x<=8 && y>=1 && y<=8)
    return true;
  return false;
}

ll bfs(ll m1,ll n1,ll m2,ll n2)
{
  ll x1,y1,c=0,x,y,i,j;
  ll xo[8]={-2,-1,1,2,2,1,-1,-2};
  ll yo[]={-1,-2,2,1,-1,-2,2,1};
  queue<pair<pair<ll,ll>,ll>>q;
  q.push({{m1,n1},0ll});
  vis[m1][n1]=1;
  while(!q.empty())
  {
    x1=q.front().first.first;
    y1=q.front().first.second;
    c=q.front().second;
    q.pop();
    if(x1==m2 && y1==n2)
      return c;
    for(i=0;i<8;i++)
    {
      x=x1+xo[i];
      y=y1+yo[i];
      if(isInside(x,y) && vis[x][y]==false)
      {
        vis[x][y]=true;
        q.push({{x,y},c+1});

      }
    }

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
ll t;
cin>>t;
while(t--)
{
  ll n1,n2,m1,m2,i,j;
  char c1,sp,c2;
  cin>>c1>>n1>>c2>>n2;
  m1=c1-96;
  m2=c2-96;
  //cout<<n1<<" "<<m1<<" "<<n2<<" "<<m2<<"\n";
  for(i=0;i<=8;i++)
  {
    for(j=0;j<=8;j++)
      vis[i][j]=0;
  }
  cout<<bfs(m1,n1,m2,n2)<<"\n";


}
}