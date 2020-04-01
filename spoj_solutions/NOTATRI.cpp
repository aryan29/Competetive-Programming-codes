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
ll n;
while(1)
{
  ll i,x,j,c=0,sum=0;
  vector<ll>v;
cin>>n;
if(n==0)
break;
for(i=0;i<n;i++)
{
  cin>>x;
  v.push_back(x);
}
sort(v.begin(),v.end());
for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
  {
    sum=v[i]+v[j];
    ll l=upper_bound(v.begin()+j,v.end(),sum)-v.begin();
    c+=(n-l);
  }
}
cout<<c<<"\n";
}
}