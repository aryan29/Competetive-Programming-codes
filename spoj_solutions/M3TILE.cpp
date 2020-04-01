#include "bits/stdc++.h"
using namespace std;
using ll = long long int;
const ll mod = 1000000007;
const ll M = 1000000000000000000ll;
#define pb push_back
inline ll add(ll a,ll b){return ((a%mod+b%mod)%mod);}
inline ll sub(ll a,ll b){return ((a%mod-b%mod+mod)%mod);}
inline ll mult(ll a,ll b){return (((a%mod)*(b%mod))%mod);}
inline ll power(ll n,ll x){ll p=1;while(x!=0){if(x%2==0){n=mult(n,n);x=x/2;}p=mult(p,n);x--;}return p;}
inline ll recurmult(ll a,ll b){ll r = 0;while (b){if (b & 1)r = add(r, a);a = mult(2,a);b >>= 1;}return r%mod;}
ll arr[30+1],arr1[30+1];
ll count(ll n)
{
    
    arr[0]=1;arr[1]=0;arr1[0]=0;arr1[1]=1;
    for(ll i=2;i<=n;i++)
    {
        arr[i]=arr[i-2]+2*arr1[i-1];
        arr1[i]=arr[i-1]+arr1[i-2];
    }
    return arr[n];
}
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);   

    count(30);
    while(1)
    {
        ll x;
        cin>>x;
        if(x==-1)
            break;
        else
            cout<<arr[x]<<"\n";
    }

//    cout<<fixed;
// cout<<setprecision(0);
}