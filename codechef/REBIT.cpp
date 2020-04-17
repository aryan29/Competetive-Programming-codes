#include <bits/stdc++.h> 
const int N = 100001;

using namespace std;
using ll = long long int;
const ll mod = 998244353;
const ll M = 1000000000000000000ll;
#define pb push_back
inline ll add(ll a,ll b){return ((a%mod+b%mod)%mod);}
inline ll sub(ll a,ll b){return ((a%mod-b%mod+mod)%mod);}
inline ll mult(ll a,ll b){return (((a%mod)*(b%mod))%mod);}
inline ll power(ll n,ll x){ll p=1;while(x!=0){if(x%2==0){n=mult(n,n);x=x/2;}p=mult(p,n);x--;}return p;}
inline ll recurmult(ll a,ll b){ll r = 0;while (b){if (b & 1)r = add(r, a);a = mult(2,a);b >>= 1;}return r%mod;}
inline ll divide(ll a,ll b){return (mult(a,power(b,mod-2)));}

long long int gcdExtended(long long int a, long long int b, long long int *x, long long int *y); 

long long int modInverse(long long int b, long long int m) 
{ 
    long long int x, y; 
    long long int g = gcdExtended(b, m, &x, &y); 
  
  
    if (g != 1) 
        return -1; 
  
    return (x%m + m) % m; 
} 

long long int modDivide(long long int a, long long int b, long long int m) 
{ 
   
    a = a % m; 
    int inv = modInverse(b, m); 
    return (inv * a) % m; 
} 

long long int gcdExtended(long long int a, long long int b, long long int *x, long long int *y) 
{ 
    
    if (a == 0) 
    { 
        *x = 0, *y = 1; 
        return b; 
    } 
  
    long long int x1, y1; 
    long long int gcd = gcdExtended(b%a, a, &x1, &y1); 
  
    *x = y1 - (b/a) * x1; 
    *y = x1; 
  
    return gcd; 
} 


int main()
{
    ios::sync_with_stdio(0);   
        cin.tie(0);   
int t;
cin>>t;
while(t--)
{
    string s1;
    cin>>s1;
   int c=0;
    string s;string geek;
     int k=0;
    for(int i1=0;i1<s1.length();i1++)
 {
     if(s1[i1]!='#')
     s=s+s1[i1];
     else
     {
         geek=""; ostringstream str1;
          str1 << c; 
          geek = str1.str(); 
          s=s+geek;
          c++;
     }
 }

    long long int x[c][4];
     for(int i1=0;i1<c;i1++)
      {
          for(int j1=0;j1<4;j1++)
          {
             x[i1][j1]=1;
          }
         
      }
    long long int div=1;
    for(int i1=1;i1<=c;i1++)
    {
        div=div*4;
        div=div%mod;
    }
     stack <int> values; 
    stack <char> ops; 
      for(int k=0;k<s.length();k++)
      {
          if(s[k]=='(')
          {
              //kuch nahi karna
          }
          if(isdigit(s[k]))
          {
              long long int val=0;
               while(k < s.length() &&  
                        isdigit(s[k])) 
            { 
                val = (val*10) + (s[k]-'0'); 
                k++; 
            } 
              
            values.push(val); 
          }
          if(s[k]=='|'||s[k]=='&'||s[k]=='^')
          {
              ops.push(s[k]);
          }
          if(s[k]==')')
          {
              long long int i,j;
              long long int x1,x2,x3,x4;
              long  long int a=values.top();
              values.pop();
              long long int b=values.top();
              values.pop();
              char op;
              op=ops.top();
              ops.pop();
              if(a<b)
              i=a;
              else
              i=b;
              j=a+b-i;
              x[i][0]=x[i][0]%mod;x[i][1]=x[i][1]%mod;x[i][2]=x[i][2]%mod;x[i][3]=x[i][3]%mod;
              x[j][0]=x[j][0]%mod;x[j][1]=x[j][1]%mod;x[j][2]=x[j][2]%mod;x[j][3]=x[j][3]%mod;
              x1=0;x2=0;x3=0;x4=0;
              if(op=='&')
              {
               x1=((x1+((x[i][0]*x[j][0])%mod))%mod);
               x1=((x1+((x[i][0]*x[j][1])%mod))%mod);
               x1=((x1+((x[i][0]*x[j][2])%mod))%mod);
               x1=((x1+((x[i][0]*x[j][3])%mod))%mod);
               x1=((x1+((x[i][1]*x[j][0])%mod))%mod);           
               x1=((x1+((x[i][2]*x[j][0])%mod))%mod);
               x1=((x1+((x[i][3]*x[j][0])%mod))%mod);
               x1=((x1+((x[i][2]*x[j][3])%mod))%mod);
               x1=((x1+((x[i][3]*x[j][2])%mod))%mod);
               x2=((x2+((x[i][1]*x[j][1])%mod))%mod);
               x3=((x3+((x[i][1]*x[j][2])%mod))%mod);
               x3=((x3+((x[i][2]*x[j][1])%mod))%mod);
               x3=((x3+((x[i][2]*x[j][2])%mod))%mod);
               x4=((x4+((x[i][1]*x[j][3])%mod))%mod);
               x4=((x4+((x[i][3]*x[j][1])%mod))%mod);
               x4=((x4+((x[i][3]*x[j][3])%mod))%mod);
              }
               if(op=='|')
              { 
               x1=((x1+((x[i][0]*x[j][0])%mod))%mod);
               x2=((x2+((x[i][1]*x[j][0])%mod))%mod);
               x2=((x2+((x[i][1]*x[j][1])%mod))%mod);
               x2=((x2+((x[i][1]*x[j][2])%mod))%mod);
               x2=((x2+((x[i][1]*x[j][3])%mod))%mod);
               x2=((x2+((x[i][0]*x[j][1])%mod))%mod);
               x2=((x2+((x[i][2]*x[j][1])%mod))%mod);
               x2=((x2+((x[i][3]*x[j][1])%mod))%mod);
               x2=((x2+((x[i][2]*x[j][3])%mod))%mod);
               x2=((x2+((x[i][3]*x[j][2])%mod))%mod);
               x3=((x3+((x[i][2]*x[j][0])%mod))%mod);
               x3=((x3+((x[i][0]*x[j][2])%mod))%mod);
               x3=((x3+((x[i][2]*x[j][2])%mod))%mod);
               x4=((x4+((x[i][3]*x[j][0])%mod))%mod);
               x4=((x4+((x[i][0]*x[j][3])%mod))%mod);
               x4=((x4+((x[i][3]*x[j][3])%mod))%mod);
              }      
               if(op=='^')
              {  
               x1=((x1+((x[i][0]*x[j][0])%mod))%mod);
               x1=((x1+((x[i][1]*x[j][1])%mod))%mod);
               x1=((x1+((x[i][2]*x[j][2])%mod))%mod);
               x1=((x1+((x[i][3]*x[j][3])%mod))%mod);
               x2=((x2+((x[i][1]*x[j][0])%mod))%mod);
               x2=((x2+((x[i][0]*x[j][1])%mod))%mod);
               x2=((x2+((x[i][2]*x[j][3])%mod))%mod);
               x2=((x2+((x[i][3]*x[j][2])%mod))%mod);
               x3=((x3+((x[i][3]*x[j][1])%mod))%mod);
               x3=((x3+((x[i][1]*x[j][3])%mod))%mod);
               x3=((x3+((x[i][0]*x[j][2])%mod))%mod);
               x3=((x3+((x[i][2]*x[j][0])%mod))%mod);
               x4=((x4+((x[i][2]*x[j][1])%mod))%mod);
               x4=((x4+((x[i][1]*x[j][2])%mod))%mod);
               x4=((x4+((x[i][3]*x[j][0])%mod))%mod);
               x4=((x4+((x[i][0]*x[j][3])%mod))%mod);
              }
              x1=x1%mod;x2=x2%mod;x3=x3%mod;x4=x4%mod;
              x[i][0]=x1;x[i][1]=x2;x[i][2]=x3;x[i][3]=x4;
              values.push(i);
          }
      }
     cout<< modDivide(x[0][0],div, 998244353)<<" "<< modDivide(x[0][1],div, 998244353)<<" "<<modDivide(x[0][2],div, 998244353)<<" "<<modDivide(x[0][3],div, 998244353)<<"\n";
}
}
