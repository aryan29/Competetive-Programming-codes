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
ll bfs(ll s,ll u,ll d,ll g,ll f)
{
  queue<pair<ll,ll>>q;
  pair<ll,ll>x;
  ll vis[1000005]={0};
  ll arr[1000005],x1,i;
  arr[0]=u;
  arr[1]=-d;
  vis[s]=1;
  q.push({s,0});
  //cout<<"hey";
  while(q.empty()==false)
  {
    x=q.front();
    q.pop();
    //cout<<x.first<<"\n";
    if(x.first==g)
    {
      return x.second;
    }
    for(i=0;i<2;i++)
    {
      x1=x.first+arr[i];
      if(vis[x1]==0 && x1<=f && x1>=1)
        {
          q.push({x1,x.second+1});
          vis[x1]=1;
        }

    }
  }
  return -1;

}
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll f,s,g,u,d,ans;
cin>>f>>s>>g>>u>>d;
ans=bfs(s,u,d,g,f);
if(ans==-1)
cout<<"use the stairs"<<"\n";
else
cout<<ans<<"\n";
}