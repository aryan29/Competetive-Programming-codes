
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
    string s;
    cin>>s;int c=0;
    int t=0;
    stack <char> s1,s2;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]=='['||s[i]=='('||s[i]=='{')
        {
            s1.push(s[i]);
        }
        else
        {
            if(s1.size()>0)
            {
         if((s1.top()=='['&&s[i]==']')||(s1.top()=='('&&s[i]==')')||(s1.top()=='{'&&s[i]=='}'))
         {
             s1.pop();
         }
         else
         {
             t=-1;
             break;
         }
         }
         else
         {
             t=-1;
             break;
         }
        }
        }
    if(s1.empty()&&t==0)
    {
        cout<<"balanced\n";
    }
    else
    {
        cout<<"not balanced\n";
    }
while(!s1.empty())
{
    s1.pop();
}
}
}
