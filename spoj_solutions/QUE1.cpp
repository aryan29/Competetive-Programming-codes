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
ll t;
cin>>t;
while(t--)
{
  ll n,x=0,pos,i,c=0,pos1,j;
  ll arr[1005];
  ll b[1005];
  ll ans[1005]={0};
  vector<pair<ll,ll>>v;
  cin>>n;
  for(i=0;i<n;i++)
    cin>>arr[i];
  for(i=0;i<n;i++)
    cin>>b[i];
  for(i=0;i<n;i++)
  {
    v.push_back({arr[i],b[i]});
  }
  sort(v.begin(),v.end());
  //cout<<v[3].second;
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
    if(v[j].second==0)
    {
      cout<<v[j].first<<" ";
      v[j].second--;
      break;
    }
    else
    {
      v[j].second--;
    }
  }
}

}
}