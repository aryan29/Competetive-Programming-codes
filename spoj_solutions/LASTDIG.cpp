#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mo(ll a,ll b)
{
	ll res=1;
   while(b>0)
   {
	if(b%2==1)
	{
   res=res%10*a%10;
   res=res%10;
	}
    a=a%10*a%10;
    a=a%10;
    b=b/2;
}
return res%10;
}
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll n;
ll a,b;
cin>>n;
while(n--)
{
	cin>>a>>b;
	cout<<mo(a,b)<<"\n";
}
}