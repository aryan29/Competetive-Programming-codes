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
  ll n1,n2,i,j,k=1,diff,mi=mod;
  cin>>n1;
  ll arr1[100005]={0};
  ll arr2[100005]={0};
  for(i=0;i<n1;i++)
  {
    cin>>arr1[i];
  }
  cin>>n2;
  for(i=0;i<n2;i++)
    cin>>arr2[i];
  sort(arr1,arr1+n1);
  sort(arr2,arr2+n2);
  for(i=0,j=0;i<n2 && j<n1;)
  {
    diff=arr2[i]-arr1[j];
    //cout<<i<<" "<<j<<"\n";
    //cout<<diff<<"\n";
    if(diff==0)
      {
        cout<<0<<"\n";
        k=0;
        break;
      }
      else if(diff>0)
        j++;
      else if(diff<0)
        i++;
      if(abs(diff)<mi)
        mi=abs(diff);
  }
  if(k==1)
    cout<<mi<<"\n";
}
}