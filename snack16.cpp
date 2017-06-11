#include<iostream>
using namespace std;
long long max1(long long a,long long b,long long c)
{
    if(a>b&&a>c)
        return a;
    else if(b>a&&b>c)
        return b;
    else
        return c;
}
int main()
{
    long long t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long r,c,m,k,j;
        cin>>r;
        cin>>c;
        cin>>m;
        cin>>k;
        cin>>j;
        prod=r*c;
        sum=m+k+j;
        if(prod==sum)
        {
         store_max=max1(m,k,j)
         if(store_max%r==0)

        }
    }
}
