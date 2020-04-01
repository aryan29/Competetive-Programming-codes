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
ll power(ll n,ll p,ll m)
{
    ll res=1;
while(p>0)
{
    if(p%2==1)
        res=(res%m*n%m)%m;
    p=p/2;
    n=n%m*n%m;
    n=n%m;
}

return res%m;
}
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll t,i;
cin>>t;
while(t--)
{
    ll n,p,pro;
    cin>>n>>p;
    pro=p-1;
for(i=n+1;i<p;i++)
{
 pro=pro*power(i,p-2,p);
 pro=pro%p;
 //cout<<pro<<endl;
}
if(n<p)
cout<<(pro)%p<<endl;
else
cout<<0<<endl;
}
}