#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s1[100],s2[100],in[2],im[2],result[150],ch;
    int j,len1,len2,carry,x,i,q=0,flag=0;
    in[1]='\0'; im[1]='\0';
    while(1)
    {
        if(flag)
            break;
        i=0;
        while(1)
        {
            ch=getchar();
            if(ch==' ')
                break;
            else
                s1[i++]=ch;
                
        }
        s1[i]='\0';
        i=0;
        while(1)
        {
            ch=getchar();
            if(ch==EOF)
            {
                flag=1;
                break;
            }
            else
                if(ch=='\n')
                    break;
                else
                    s2[i++]=ch;
        }
        s2[i]='\0';
        carry=0; q=0;
        len1=strlen(s1);
        len2=strlen(s2);
        for(i=len1-1,j=len2-1;i>=0 && j>=0;i--,j--)
        {
            in[0]=s1[i]; im[0]=s2[j];
            x=atoi(in)+atoi(im)+carry;
            carry=0;
            if(x>9)
            {
                carry=x/10;
                x=x%10;
            }
            result[q++]=x+48;
        }
        if((i+1)==0)
        {
            while(j>=0)
            {
                in[0]=s2[j];
                x=atoi(in)+carry;
                carry=0;
                if(x>9)
                {
                    carry=x/10;
                    x=x%10;
                }
                j--;
                result[q++]=x+48;
            }
        }
        else if((j+1)==0)
        {
            while(i>=0)
            {
                in[0]=s1[i];
                x=atoi(in)+carry;
                carry=0;
                if(x>9)
                {
                    carry=x/10;
                    x=x%10;
                }
                i--;
                result[q++]=x+48;
            }
        }
        result[q]='\0';
        for(i=q-1;i>=0;i--)
            printf("%c",result[i]);
        printf("\n");
    }
    
}
