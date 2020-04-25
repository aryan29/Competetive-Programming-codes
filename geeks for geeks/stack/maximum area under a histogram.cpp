#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    long long int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    stack <int> s;
	   long long int i=0;
	   long long int max=0;
	   while(i<n)
	   {
	    if(s.empty()||a[i]>=a[s.top()])
	    {
	        s.push(i++);
	    }
	    else
	    {
	        long long  int l=s.top();
	        s.pop();
	        long long int area;
	        if(s.size()==0)
	        {
	            area=a[l]*i;
	        }
	        else
	        {
	            area=a[l]*(i-s.top()-1);
	        }
	        if(area>max)
	        max=area;
	    }
	   }
	   while(s.size()>0)
	   {
	        long long int l=s.top();
	        s.pop();
	        long long int area;
	        if(s.size()==0)
	        {
	            area=a[l]*i;
	        }
	        else
	        {
	            area=a[l]*(i-s.top()-1);
	        }
	        if(area>max)
	        max=area;
	    }
	   
	  cout<<max<<"\n";
	}
}