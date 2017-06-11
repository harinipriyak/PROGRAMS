#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long y,sum=0,sum1=0,dis[10001],n,m,k,vill[10001],vs[10001],v[10001],s=0;
    cin>>n;
    cin>>m;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        cin>>vill[i];
    }
    sum1=(m-1)*10;

    for(int j=0;j<n;j++)
    {
        if(vill[j]<k&&vill[j]>0)
        {
            v[s]=vill[j];
            vs[s]=j;
            dis[s]=sum;
            s++;
        }
        sum=sum+10;
    }
    for(int z=0;z<s;z++)
    {
        dis[z]=abs(dis[z]-sum1);
    }
    sort(dis,dis+s);
    cout<<dis[0];
    return 0;
}
