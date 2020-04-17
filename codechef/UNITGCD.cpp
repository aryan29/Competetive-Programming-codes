
#include <bits/stdc++.h> 
#define ll long long 
const int N = 100001; 
using namespace std; 

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n>1)
	    cout<<n/2<<"\n";
	    else 
	    cout<<"1\n";
	    while(n>3)
	    {
	        cout<<"2"<<" "<<n<<" "<<n-1<<"\n";
	        n=n-2;
	    }
	    
	    if(n==3)
	    {
	        cout<<"3 1 2 3\n";
	    }
	    if(n==2)
	    {
	        cout<<"2 1 2\n";
	    }
	    if(n==1)
	    {
	        cout<<"1 1\n";
	    }
    }
}
