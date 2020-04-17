
#include <bits/stdc++.h> 
#define ll long long 
const int N = 100001; 
using namespace std; 

int main()
{
    ios::sync_with_stdio(0);   
        cin.tie(0);   
int t;
cin>>t;
while(t--)
{
    long long int x,k;
    cin>>x>>k;
    long long int t1=x;
    long long int c=0;
    while(x%2==0)
    {
        x=x/2;
        c++;
    }
    for(long long int i=3;i*i<=t1;i++)
    {
        if(x%i==0)
        {
            x=x/i;
            c++;
        }
        if(x==1)
        break;
    }
    if(x>2)
    {
        x=1;
        c++;
    }
    if(c>=k)
    {
        cout<<"1\n";
    }
    else
    {
        cout<<"0\n";
    }
}
}