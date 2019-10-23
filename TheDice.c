#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,g=0;
    char s[100001];
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='6')
        {
           if(s[l-1]=='6')
          {
              g=-1;
              break;
          }
            continue;
        }
        else
        {
            g++;
        }
    }
    
    printf("%d",g);
    return 0;
}
