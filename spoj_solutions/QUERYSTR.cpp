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
ll Z[200005];
void getZ(string str)
{
ll L=0,R=0,i,n=str.length();
for(i=1;i<n;i++)
{
    if(i>R)
    {
        L=R=i;
        while(R<n && str[R-L]==str[R])
            R++;
        Z[i]=R-L;
        R--;
    }
    else
    {
        if(Z[i-L]<R-i+1)
        Z[i]=Z[i-L];
        else
        {
            L=i;
            while(R<n && str[R-L]==str[R])
                R++;
            Z[i]=R-L;
            R--;
        }
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
ll t,i,n,q,x;
cin>>t;
while(t--)
{
    string s,s1;
    cin>>s;
    reverse(s.begin(),s.end());
    getZ(s);
    n=s.length();
    cin>>q;
    while(q--)
    {
        cin>>x;
        if(x==n)
            cout<<n<<"\n";
        else
            cout<<(Z[n-x])<<"\n";
    }


}
}