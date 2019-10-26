#include<stdio.h>
int main()
{   
    int l,j=0,k=0;
    char s[200];
    scanf("%s",&s);
    l=strlen(s);
    for(int i=0;i<l;i++)
    {
        if(s[i]=='L')
        j--;
        if(s[i]=='R')
        j++;
        if(s[i]=='U')
        k++;
        if(s[i]=='D')
        k--;
    }
    printf("%d %d",j,k);
    return 0;
}
