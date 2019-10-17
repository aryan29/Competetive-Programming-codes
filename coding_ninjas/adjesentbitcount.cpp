#include<bits/stdc++.h>
using namespace std;
long mod=pow(10,9)+7;
int main()
{
    //int dp[102][102][2];
    int n=100,k=100;
    int **dp0=new int *[n+2];
    for(int i=0;i<n+2;i++)
    {
        dp0[i]= new int [k+2];
    }
    int **dp1=new int *[n+2];
    for(int i=0;i<n+2;i++)
    {
        dp1[i]= new int [k+2];
    }
    for(int i=0;i<=n;i++)
    for(int j=0;j<=k;j++)
    {
        dp0[i][j]=0;
        dp1[i][j]=0;
    }
    dp0[1][0]=1;
    dp1[1][0]=1;
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            dp0[i][j]=((dp0[i-1][j]%mod)+(dp1[i-1][j]%mod))%mod;
            if(j!=0)
            dp1[i][j]=((dp1[i-1][j-1]%mod)+(dp0[i-1][j]%mod))%mod;
            else 
            dp1[i][j]=(dp0[i-1][0]%mod);
        }
    }
    int nu;
    cin>>nu;
    while (nu--)
    {
        int id;
        cin>>id>>n>>k;
        cout<<id<<" "<<(((dp0[n][k]%mod)+(dp1[n][k]%mod))%mod)<<"\n";
    }
    
}