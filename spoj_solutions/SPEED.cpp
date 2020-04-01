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
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll t;
cin>>t;
while(t--)
{
    ll a,b,k,x,ans;
    long double y;
    cin>>a>>b;
    //cout<<"hey";
    if((a>0 && b>0 )|| (a<0 && b<0))
    {
        k=__gcd(a,b);
       // cout<<k;
        x=a/k;
        y=b/k;
        cout<<abs(y-x)<<endl;
    }
    else
{
        x=abs(a)*abs(b)/(__gcd(abs(a),abs(b)));
        y=(long double)x/(abs(a)+abs(b));
        //lcm of (x/a and y/b)
       // cout<<x<<" "<<y<<endl;
        ans=abs((x/a))*abs((x/b))/__gcd(abs(x/a),abs(x/b));
        ans=ans/y;
        cout<<abs(ans)<<endl;
    }
}

}