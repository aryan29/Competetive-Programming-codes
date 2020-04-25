#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    stack<string, vector<string> > s;
	    for(int i=0;i<n;i++)
	    {
	        string s1;
	        cin>>s1;
	        if(s.size()==0)
	        {
	            s.push(s1);
	        }
	        else
	        {
	            if(s.top()==s1)
	            s.pop();
	            else
	            s.push(s1);
	        }
	    }
	    cout<<s.size()<<"\n";
	}
}