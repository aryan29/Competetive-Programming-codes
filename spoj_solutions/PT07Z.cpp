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
vector<ll>adj[100005];
bool check[100005]={0};
ll ma=0,point;
ll dfs(ll n,ll x)
{
    ll i;
    //cout<<n<<endl;
    if(x>ma)
    {
        ma=x;
        point=n;
    }
    check[n]=true;
        for(i=0;i<adj[n].size();i++)
        {
            if(check[adj[n][i]]==false)
                dfs(adj[n][i],x+1);
        }
        return 0;
}
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll n,root,i;
cin>>n;
while(n--)
{
    ll a,b;
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
}
ma=0;
dfs(1,0);
//cout<<ma<<"\n";
ma=0;
for(i=0;i<100005;i++)
check[i]=0;
dfs(point,0);
cout<<ma<<"\n";
}