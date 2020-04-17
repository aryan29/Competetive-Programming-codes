
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
    long long int n;
    cin>>n;
    long long int a[n];
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    long long int sum=0;
    for(long long int i=0;i<n;i++)
    {
        a[i]=a[i]-i;
        if(a[i]>0)
        sum=sum+a[i];
    }
    sum=sum%1000000007 ;
    cout<<sum<<"\n";
}
}
