#include <iostream>
#include<bits/stdc++.h>
#include<string.h>

using namespace std;

void reverse(char *str, int len)
{
stack <char> s;
int i=0;
while(len--)
{
s.push(str[i++]);
}
int j=0;
while(!s.empty())
{
str[j++]=s.top();
s.pop();
}
}


int main()
{
 char str[]="input";
 reverse(str,5);
 cout<<str;
}

