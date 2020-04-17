
#include <bits/stdc++.h> 
#define ll long long 
const int N = 100001; 
using namespace std; 

int main() {
     ios::sync_with_stdio(0);   
        cin.tie(0);   
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0;
    while(a[i]==0)
    {
        i++;
    }
    i++;int c1=0;int min=INT_MAX;
    for(;i<n;i++)
    {
        if(a[i]==0)
        c1++;
        else if(a[i]==1)
        {
            if(c1<min)
            min=c1;
            c1=0;
        }
    }
    if(min<5)
    cout<<"NO\n";
    else
    cout<<"YES\n";
}
}