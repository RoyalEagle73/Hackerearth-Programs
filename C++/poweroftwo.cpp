#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,i,one=0,zero=0,m;
    cin>>n;
    ll arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        ll count1=0;
        m=arr[i];
        while(m>0)
        {
            if(m%2==0)
            {
                count1++;
                m=m/2;
            }
            else
                break;
        }
        arr[i]=count1;
        if(arr[i]==0)
            zero++;
        else if(arr[i]==1)
            one++;
    }
    cout<<((zero*(zero-1))/2)+(zero*one)<<endl;
    return 0;
}
