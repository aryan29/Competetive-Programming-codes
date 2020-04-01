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
ll dopa[1015][1015];
ll recur(ll st,ll en,ll arr[],ll n)
{
	if(st>en)
		return 0;
	if(dopa[st][en]!=-1)return dopa[st][en];
	ll ans1=0,ans2=0,ans=0;
	if(arr[st+1]>=arr[en])
		ans1=arr[st]+recur(st+2,en,arr,n);
	else if(arr[st+1]<arr[en])
		ans1=arr[st]+recur(st+1,en-1,arr,n);
	if(arr[st]>=arr[en-1])
		ans2+=arr[en]+recur(st+1,en-1,arr,n);
	else if(arr[st]<arr[en-1])
		ans2+=arr[en]+recur(st,en-2,arr,n);
	dopa[st][en]=max(ans1,ans2);
	return dopa[st][en];

}
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);   
    #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin);   
    freopen("output.txt", "w", stdout);
    #endif 
    ll c=0; 
    while(1)
    {
    	ll n,s=0;
    	c++;
    	cin>>n;
    	if(n==0)
    		break;
    	ll arr[n+2];
    	for(ll i=0;i<n;i++)
    	{
    		cin>>arr[i];
    		s+=arr[i];
    	}
    	for(ll i=0;i<=n+2;i++)
    	{
    		for(ll j=0;j<=n+2;j++)
    			dopa[i][j]=-1;
    	}
    	cout<<"In game "<<c<<", the greedy strategy might lose by as many as "<<2*recur(0,n-1,arr,n)-s<<" points.\n";
    }
//    cout<<fixed;
// cout<<setprecision(0);
//len return unsigned long long be aware 
//in case of runtime err use
//(ll)(s.length())-1
}