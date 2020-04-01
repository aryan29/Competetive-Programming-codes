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
ll b,n,x,y,i,j;
ll arr[1001][1001];
ll wt[1001];
ll val[1001];
while(1)
{
cin>>b>>n;
if(b==0 && n==0)
break;
for(i=0;i<n;i++)
{
    cin>>wt[i]>>val[i];
}
for(i=0;i<=n;i++)//items included
{
    for(j=0;j<=b;j++)//budget
    {
//increasing budget
    if(i==0 || j==0)
        arr[i][j]=0;
    else if(j>=wt[i-1])
    {
      arr[i][j]=max(val[i-1]+arr[i-1][j-wt[i-1]],arr[i-1][j]);
//max(including+if not including this at x-val budget, not including this at x budget)
    }
    else
        arr[i][j]=arr[i-1][j];
    //cout<<arr[i][j]<<"\n";
    }
}
//standard knapsack problem in
//this i is running whether include an item or not
for(i=b;i>=0;i--)
    if(arr[n][b]!=arr[n][i])
        break;
cout<<i+1<<" "<<arr[n][b]<<"\n";
}
}