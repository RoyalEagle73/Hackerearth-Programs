#include<stdio.h>
int main()
{
int a[5],i,j,n,t,m;
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
m=i;
for(j=i+1;j<n;j++)
{
if(a[m]>a[j])
m=j;
}
if(i!=m)
{
t=a[i];
a[i]=a[m];
a[m]=t;
}
}
printf("sorted list\n");
for(i=0;i<5;i++)
printf("%d",a[i]);
printf("\n");
return 0;
}
