#include<bits/stdc++.h>
using namespace std;
int longest(string str1,string str2)
{
    int n=str1.size(),m=str2.size();
    int dp[n+1][m+1],i,j;
    for(i=0;i<=n;i++)
        dp[i][0]=0;
    for(i=0;i<=m;i++)
        dp[0][i]=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(str1[i]==str2[j])
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[n][m];
}
int main()
{
    string str1="OTEHZRIICFSKPGGKBBIPZZRZUCXAMLUDFYKGRUOWZGIOOOBPPLEQLWPHAPJNADQHDCNVWDTXJBMYPPPHAUXNSPUSGDHIIXQMBF";
    string str2="JXJCVUDJSUYIBYEBMWSIQYOYGYXYMZEVYPZV";
    cout<<longest(str1,str2)<<endl;
    return 0;
}
