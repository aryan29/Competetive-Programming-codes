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
ll compare(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
  return(a.second<b.second);
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
  ll n,i,x,y,s=0,l=0,c=0;
  cin>>n;
  vector<pair<ll,ll>>v;
  for(i=0;i<n;i++)
  {
    cin>>x>>y;
    v.push_back({x,y});
  }
  sort(v.begin(),v.end(),compare);
  //cout<<v[1].second;
for(i=0;i<n;i++)
{
  //cout<<l<<"\n";
  if(v[i].first>=l)
  {
    l=v[i].second;
    c++;
  }
}
cout<<c<<"\n";
v.clear();
}
}