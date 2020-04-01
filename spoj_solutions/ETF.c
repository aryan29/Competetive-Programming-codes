#include<stdio.h>
int prime(int n)
{
    int i,c=0,d=1;
    for(i=1;i*i<=n;i++)
    {
      if(n%i==0)
            c++;
      if(c>=2)
      {d=0;break;}
    }
    if(d==1 && n!=1)
        return 1;
    else
        return 0;
}
int main()
{
    int t,i,a,b,n;
    double pro;
    scanf("%d",&t);
    while(t--)
    {
        pro=1;
        scanf("%d",&n);
        for(i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
            a=i;
            b=n/i;
        if(a!=b)
            {
                if(prime(a)==1)
                    {
                        pro=pro*(1-1/(double)a);}
                if(prime(b)==1)
                    {
                        pro=pro*(1-1/(double)b);}
            }
            else
                if(prime(a)==1)
                pro=pro*(1-1/(double)a);
            }
        }
        printf("%.0f\n",(pro*n));
    }
}
