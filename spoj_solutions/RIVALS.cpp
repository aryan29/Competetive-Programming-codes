#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
long long int power(long long int x,long long int y,long long int p)
{
	long long int res = 1;
	x = x % p;
	while (y > 0)
	{
		if (y & 1)
			res = (res*x) % p;
		y = y>>1;
		x = (x*x) % p;
	}
	return res;
}

long long int modInverse(long long int n,long long int p)
{
	return power(n, p-2, p);
}

int main()
{
long long int t,a,b,p=1000000007,c,i,k;
scanf("%lld",&t);
long long fac[10000005];
fac[0]=1;
for(i=1;i<=2000000;i++)
    fac[i]=fac[i-1]*i%p;
while(t--)
{
    scanf("%lld %lld",&c,&b);
    a=c+b;
    k=(fac[a]* modInverse(fac[b], p) % p *
			modInverse(fac[a-b], p) % p) % p;
    cout<<k<<endl;
}
}
