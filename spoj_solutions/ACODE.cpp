#include "bits/stdc++.h"
using namespace std;
using ll = long long int;
const ll mod = 1000000007;
const ll M = 1000000000000000000ll;
#define pb push_back
inline ll add(ll a, ll b) {return ((a % mod + b % mod) % mod);}
inline ll sub(ll a, ll b) {return ((a % mod - b % mod + mod) % mod);}
inline ll mult(ll a, ll b) {return (((a % mod) * (b % mod)) % mod);}
inline ll power(ll n, ll x) {ll p = 1; while (x != 0) {if (x % 2 == 0) {n = mult(n, n); x = x / 2;} p = mult(p, n); x--;} return p;}
inline ll recurmult(ll a, ll b) {ll r = 0; while (b) {if (b & 1)r = add(r, a); a = mult(2, a); b >>= 1;} return r % mod;}
string s1;
ll n1;
ll dp[5020];
ll recur(ll x)
{
    if(dp[x]!=-1)return dp[x];
    ll ans = 0;
    if(s1[x]=='0')
        return 0;
    if (x > n1)
        return dp[x]=0;
    if (x == (n1))
        return dp[x]=1;
    if(s1[x+1]!='0')
    ans += recur(x + 1);
    if (s1[x] == '1')
        ans += recur(x + 2);
    else if (s1[x] == '2' && s1[x + 1] <= '6' && x<n1-1)
        ans += recur(x + 2);
    return dp[x]=ans;


}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (1)
    {
        string s;
        cin>>s;
        s1 = s;
        n1 = s.length();
        for(ll i=0;i<=n1+5;i++)
            dp[i]=-1;
        if (s == "0")
            break;
        cout<<recur(0)<<"\n";
    }
//    cout<<fixed;
// cout<<setprecision(0);
//len return unsigned long long be aware
//in case of runtime err use
//(ll)(s.length())-1
}