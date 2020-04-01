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
ll par[200005],c=0,siz[200005];
ll find(ll x)
{
    if(par[x]==x)
        return x;
    else
        return find(par[x]);
}
void join(ll x, ll y,ll k)
{
    //cout<<"Hello";
    ll x1,y1;
    x1=find(x);
    y1=find(y);
    if((siz[x1]+siz[y1])<=(k))
    {
        //cout<<siz[x1]<<" "<<siz[y1]<<"\n";
        if(siz[x1]<siz[y1])
        {
            par[x1]=y1;
           siz[y1]+=siz[x1];
        }
        else
        {
            //cout<<siz[y1]<<" "<<siz[x1]<<" "<<x1<<" "<<y1<<"\n";
            par[y1]=x1;
           siz[x1]+=siz[y1];
        }
    }
}

int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll n,m,i;
cin>>n>>m;
ll t;
cin>>t;
for(i=1;i<=n;i++)
{
 par[i]=i;
 siz[i]=1;
}
//cout<<"hey";
while(t--)
{
    char ch;
    ll x,y;
    cin>>ch;
    if(ch=='A')
    {
    cin>>x>>y;
    join(x,y,m);
    }
    else if(ch=='E')
    {
     cin>>x>>y;
     cout<<((find(x)==find(y))?"Yes":"No");
     cout<<"\n";
    }
    else if(ch=='S')
    {
  //cout<<"how";
        cin>>x;
        cout<<siz[find(x)];
        cout<<"\n";
    }
    
}
}