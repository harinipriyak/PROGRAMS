#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long n,a[100001],max1=-999,mo=0;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(int m=0;m<n;m++)
        {
            for(int k=m+1;k<n;k++)
            {
                mo=a[m]%a[k];
                if(mo>max1)
                {
                    max1=mo;
                }
            }
        }
        cout<<max1<<endl;
    }
}
