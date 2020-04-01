#include "bits/stdc++.h"
using namespace std;
using ll = long long int;
#define pb push_back
////////////////////////////////////////////////////
//Bitwise seive
ll n=100000000;
ll prime[(ll)100000000/64];
void setbit(ll x)
{
prime[x>>6]|=(1<<((x>>1)&31));//taking modulo with 32
//and setting the x/2th bit
}
ll isprime(ll x)
{
return (prime[x>>6]&(1<<((x>>1)&31)));
}
void bitwiseSeive()
{

//memset(prime,0,sizeof(prime));
ll i,j;
for(i=3;i*i<=n;i+=2)
{
    if(isprime(i)==false)
    {
        //cout<<i<<"\n";
        for(j=i*i;j<=n;j+=i*2)
            setbit(j);
    }
}
vector<ll>v;
v.pb(2);
for(i=3;i<=n;i+=2)
{
    
    if(!isprime(i))
    {
        //cout<<i<<"\n";
        v.pb(i);
    }
}
for(i=0;i<=n;i+=100)
{
    if(v[i]==0)
break;
if(v[i]<=n)
cout<<v[i]<<"\n";

}
}
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);   
    #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin);   
    freopen("output.txt", "w", stdout);
    #endif  
    bitwiseSeive();
    return 0;

//    cout<<fixed;
// cout<<setprecision(0);
}