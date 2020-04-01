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
ll tree[1000000],lazy[1000000],n;
void update(ll node,ll l,ll h,ll p,ll q,ll v)
{
	//cout<<"hello"<<"\n";
	if(lazy[node]!=0)
	{
		tree[node]=tree[node]+lazy[node]*(h-l+1);
		if(l!=h)
		{
		lazy[2*node+1]+=lazy[node];
		lazy[2*node]+=lazy[node];
	}
		lazy[node]=0;
	}
	//cout<<"hello"<<"\n";
	if(p>h || q<l || l>h)
		return;
	if(p<=l && q>=h)
	{
		tree[node]+=v*(h-l+1);
		//cout<<l<<" "<<h<<"\n";
		if(l!=h)
		{
			lazy[(node*2)+1]+=v;
			lazy[2*node]+=v;
		}
		return;                  //for fidning max values
	}
	ll mid=(h+l)/2;
	//cout<<mid<<"\n";
	update(2*node,l,mid,p,q,v);
	update(2*node+1,mid+1,h,p,q,v);
	tree[node]=tree[(2*node)+1]+tree[2*node];
	}
ll query(ll node,ll l,ll h,ll s ,ll e)
{
if(e<l || s>h || l>h)
	return 0;
if(lazy[node]!=0)
{
	tree[node]+=lazy[node]*(h-l+1);
	if(l!=h)
	{
		lazy[2*node]+=lazy[node];
		lazy[(2*node)+1]+=lazy[node];
	}
	lazy[node]=0;
}
if(s<=l && e>=h)
	return tree[node];
ll mid=(l+h)/2;
return (query(2*node,l,mid,s,e)+query(2*node+1,mid+1,h,s,e));


}
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll i,j,k,t,r,u,v,p,q,c,l,val,x;
cin>>t;
while(t--)
{
      cin>>n>>c;
for(i=0;i<=4*n;i++)
{
	lazy[i]=0;
	tree[i]=0;
}
      while(c--)
      {
            cin>>x;
            if(x==0)
            {
                 cin>>p>>q>>val;
                 update(1,1,n,p,q,val);
              
            }
            else
            {
                  cin>>p>>q;
                
                  ll ansi=query(1,1,n,p,q);
                  cout<<ansi<<endl;

            }
      }
     
     
}
    return 0;
}
