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
ll primeFactors(ll n)  
{  
    // Print the number of 2s that divide n  
    ll c=0;
    if(n%2==0)
    {
        c++;
    while (n % 2 == 0)  
    {  
      //  cout << 2 << " ";  
        n = n/2;  
    }  
}
    for (ll i = 3; i <= sqrt(n); i = i + 2)  
    { 
     if(n%i==0)
        {
            c++;
        while (n % i == 0)  
        {  
            //cout << i << " ";  
            n = n/i;  
        }  
      //  if(c>=3)
        //    break;
    }
    }
        if (n > 2) 
        {
            c++;
        //cout << n << " ";  
    }  
    if(c>=3)
    return 1;
else
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
ll t;
ll i,n,c=0;
ll arr[1001];

cin>>t;
for(n=1;n<=10000;n++)
{
    if(c>=1000)
        break;
if(primeFactors(n)==1)
    arr[c++]=n;
}
while(t--)
{
cin>>n;
cout<<arr[n-1]<<"\n";
}
}