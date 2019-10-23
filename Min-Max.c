#include<stdio.h>
int main()
{
    int n,max,min,c=0,i,j,d;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&a[0]);
    max=a[0];
    min=a[0];
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
        max=a[i];
        if(min>a[i])
        min=a[i];
    }
    d=max-min-1;
   for(i=min+1;i<max;i++)
   {
      for(j=0;j<n;j++)
      {
          if(a[j]==i)
          {
              c++;
              break;
          }
      }
   }
    if(c==d)
    printf("YES");
    else
    printf("NO");
    return 0;
}
