#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,sum=0;
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll sum1=0,pro=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]!=-1)
            {
                sum1+=arr[i];
                pro+=pow(arr[i],2);
            }
            else
            {
                ll d=pow(sum1,2);
                sum+=((d-pro)/2);
                sum1=0;
                pro=0;
            }

        }
        sum+=((pow(sum1,2)-pro)/2);
                sum1=0;
                pro=0;
        cout<<sum<<endl;
    }
}
