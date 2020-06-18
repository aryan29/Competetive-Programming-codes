#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s1;
	    cin>>s1;
	    stack <char> s;
	    int e=0;int o=0;
	    if(s1.length()%2==1)
	    {
	        cout<<"-1";
	    }
	    else
	    {
	        for(int i=0;i<s1.length();i++)
	        {
	            if(s1[i]=='{')
	            {
	                s.push(s1[i]);e++;
	            }
	            else 
	            {
	                if(s.size()>0&&s.top()=='{')
	                {
	                    s.pop();e--;
	                }
	                else
	                {
	                    s.push(s1[i]);o++;
	                }
	            }
	        }
	        int ans=((e+1)/2)+((o+1)/2);
	        cout<<ans;
	    }
	    cout<<"\n";
	}
}