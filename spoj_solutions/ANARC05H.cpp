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
ll dp[100][500];
ll recur(ll x,ll s)
{
    // if(dp[x][s]!=-1)return dp[x][s];
    if(x==s1.length()-1)
        return dp[x][s]=1;
    // cout<<"dp\n";
    ll ct = 0,ans=0;
    for (ll i = x + 1; i < s1.length(); i++)
    {
        ct += s1[i]-'0';
        if (ct >=s)
            ans+=recur(i,ct);
    }
    if(x!=-1)
    dp[x][s]=ans;
    return ans;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll c=1;
    while (1)
    {
        string s;
        cin >> s;
        for(ll i=0;i<=26;i++)
        {
            for(ll j=0;j<=26*9;j++)
                dp[i][j]=-1;
        }
        s1 = s;
        if (s == "bye")
            break;
        cout<<c<<". "<<recur(-1,0)<<"\n";
        c++;


//    cout<<fixed;
// cout<<setprecision(0);
//len return unsigned long long be aware
//in case of runtime err use
//(ll)(s.length())-1
    }
}