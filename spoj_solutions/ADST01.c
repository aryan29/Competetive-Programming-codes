#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long long int power(long long int x,long long int y,long long int p)
{
	long long int res=1;
	x = x%p;
	while (y>0)
	{
		if (y&1)
			res=((res%p)*(x%p))%p;
		y=y>>1;
		x=((x%p)*(x%p))%p;
	}
	return (res%p);
}
long long int power1(long long int x,long long int y,long long int p,long long int a)
{
	long long int res=a%p;
	x = x%p;
	while (y>0)
	{
		if (y&1)
			res=((res%p)*(x%p))%p;
		y=y>>1;
		x=((x%p)*(x%p))%p;
	}
	return (res%p);
}
int main()
{
    int t;
    long long int n,sum,i,m=(int)ceil(pow(10,9))+7,a;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        scanf("%lld",&n);
        a=(power(10,n,m)-1%m +m);
        a=a%m;
        sum=(10*power1(9,m-2,m,a))%m-n%m+m;
        sum=sum%m;
        sum=power1(9,m-2,m,(5*sum));
        sum=sum%m+n%m;
        sum=sum%m;
        printf("%lld\n",sum);
    }
}
