#include<stdio.h>
int main()
{   int j,k,m,i,l;
    long n,max;
    scanf("%ld",&n);
    long a[n],s[n+1],b[n];
    s[0]=0;
    for(i=1;i<=n;i++)
   {
      scanf("%ld ",&a[i]);
      s[i]=s[i-1]+a[i];
      b[i]=0;
   }
    for(i=1;i<=n;i++)
    {   j=i;
        m=1;
        while(j<=n)
        {
            m++;
            k=j;
            j+=m;
        }
        b[i]=s[k]-s[i-1];
    }
    max=b[1];
    for(i=2;i<=n;i++)
    {
       if(max<b[i])
        {
            max=b[i];
        }
    }
    printf("%ld",max);
return 0;
}
Language: C
