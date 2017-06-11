#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<stack>
#include<vector>
#include<algorithm>
#define ll long long int
#define mod 100007
using namespace std;
int main()
{

    int t;
    scanf("%d",&t);
    while(t--){
    {
        int n;
        cin>>n;
        ll fh=0,sh=0;
        for(int i=0;i<n;i++)
        {
            ll ar;
            scanf("%lld",&ar);
            if(ar>sh&&ar<fh)
                sh=ar;
            if(ar>sh&&ar>fh)
            {
                sh=fh;
                fh=ar;
            }
        }
        cout<<sh<<endl;
    }
    }
    return 0;

}
