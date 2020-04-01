#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,ma=0,i;
ll arr[1000005];
ll c[1000005]={0};
cin>>n;
for(i=0;i<n;i++)
    cin>>arr[i];
for(i=0;i<n;i++)
{
    c[arr[i]]=max(c[arr[i]-1]+1,c[arr[i]]);
    if(c[arr[i]]>ma)
        ma=c[arr[i]];
}
cout<<ma<<"\n";
}

