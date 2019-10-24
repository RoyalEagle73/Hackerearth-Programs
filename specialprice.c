#include<stdio.h>
int main()
{
    long n,q,p1,p2,h[100001]={0},sum;
    scanf("%ld",&n);
    long long int a[n],s[100001];
    for(int i=0;i<n;i++)
    {
      scanf("%lld ",&a[i]);
      if(a[i]<=100000)
      h[a[i]]+=a[i];
    }
    s[0]=h[0];
    for(int j=1;j<=100000;j++)
    {
        s[j]=s[j-1]+h[j];
    }
    scanf("%ld",&q);
    for(int i=0;i<q;i++)
    { 
        scanf("%ld %ld",&p1,&p2);
        if(p1==0)
        sum=s[p2];
        else
        sum=s[p2]-s[p1-1];
        printf("%ld\n",sum);
    }
    return 0;
}
