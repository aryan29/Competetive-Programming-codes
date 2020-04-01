#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,n,i,j;
    int a[100005];
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    a[2]=2;
    a[3]=0;
    for(j=4;j<=n;j++)
    {
    for(i=(int)ceil(sqrt(j));i>=2;i--)
    {
        if(j%i==0)
        {
           a[j]=a[i]+a[j/i];
        }
    }
    }
    printf("%d",a[n]);
}
