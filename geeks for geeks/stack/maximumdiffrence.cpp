#include<bits/stdc++.h>
using namespace std;
 

int findMaxDiff(int [], int n);

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   	int n;
   	cin>>n;
   	int a[n];
   	for(int i=0;i<n;i++)
   	cin>>a[i];
   	cout<<findMaxDiff(a,n)<<endl;
   }
    return 0;
}


// } Driver Code Ends
/*You are required to complete this method */
int findMaxDiff(int A[], int n)
{
  int a1[n];int a2[n];
  stack <int> s1,s2;
  s1.push(0);
  for(int i=0;i<n;i++)
  {
      if(A[i]>s1.top())
      {
          a1[i]=s1.top();
          s1.push(A[i]);
      }
      else
      {
          s1.pop();i--;
      }
  }
  s2.push(0);
  for(int i=0;i<n;i++)
  {
      if(A[n-1-i]>s2.top())
      {
          a2[n-1-i]=s2.top();
          s2.push(A[n-1-i]);
      }
      else
      {
          s2.pop();i--;
      }
  }
  int min=0;
  for(int i=0;i<n;i++)
  {
      if(abs(a1[i]-a2[i])>min)
      min=abs(a1[i]-a2[i]);
  }
  return min;
}