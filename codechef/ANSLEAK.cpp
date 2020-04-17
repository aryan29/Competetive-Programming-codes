
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
	    int n,m,k;
	    cin>>n>>m>>k;
	    int a[n][k];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<k;j++)
	        {
	            cin>>a[i][j];
	        }
	    }
	    int m1[9]={0};int min=1000000;int max=0;
	    int ans[n];int j=k-1;
	    int level[k]={0};
	    for(int i=0;i<n;i++)
	    { 
	        for(int j=0;j<k;j++)
	        {
	           if(level[j]==min||i==0){
	               int x=(a[i][j]-1);
	               m1[x]=m1[x]+1;}
	        }
	        max=0;
	        for(int i1=0;i1<9;i1++)
	        {
	            if(m1[i1]>max)
	            {
	                max=m1[i1];
	                ans[i]=i1+1;
	            }
	           //  cout<<m1[i1]<<" ";
	            m1[i1]=0;
	           
	        }
	        min=1000000;
	        for(int j=0;j<k;j++)
	        {
	         if(ans[i]==a[i][j])
	         level[j]=level[j]+1;
	        }
	         for(int j=0;j<k;j++)
	        {
	         if(level[j]<min)
	         {
	             min=level[j];
	         }
	        // cout<<level[j]<<" ";
	        }
	        
	        
	    }
	     for(int i=0;i<n;i++)
	    {
	    cout<<ans[i]<<" ";
	    }
	    cout<<"\n";
	}
}