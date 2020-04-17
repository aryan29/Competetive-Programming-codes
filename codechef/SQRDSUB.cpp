#include <bits/stdc++.h> 
#define ll long long 
const int N = 100001; 
using namespace std; 


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    long long int v[n],v1[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	     for(int i=0;i<n;i++)
	    {
	        if(v[i]%2==0&&v[i]%4!=0&&v[i]%2!=1)
	        v1[i]=0;
	        else
	        v1[i]=-1;
	    }
	    long long int sum=0;long long int i=0;
	    while(i<n)
	    {
	        if(v1[i]==0)
	        {v1[i]=sum;sum=0;}
	        else if(v[i]%2==0)
	        sum=0;
	        else
	        sum++;
	        i++;
	    }
	    sum=0;i=n-1;
	    while(i>=0)
	    {
	        if(v1[i]!=-1)
	        {v1[i]=v1[i]+sum+(v1[i]*sum)+1;sum=0;}
	         else if(v[i]%2==0)
	        sum=0;
	        else
	        sum++;
	        i--;
	    }
	    sum=0;
	    for(int i=0;i<n;i++)
	    {
	        if(v1[i]!=-1)
	        sum=sum+v1[i];
	    }
	    long long int a=((n*(n+1))/2);
	    a=a-sum;
	    cout<<a<<"\n";
	}
}

