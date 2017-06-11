#include<iostream>
using namespace std;
int main()
{
    long long int t,count1=0,count2=0;
    cin>>t;
    while(t--){
        long long int flag=0,p=0,n,k,first,island[100001],visited[100001]={0};
        cin>>n;
        cin>>k;
        count1=0;
        count2=0;
        for(int x=0;x<n;x++)
        {
            cin>>first;
            for(int y=0;y<first;y++)
            {
                cin>>island[y];
            }
            for(int a=1;a<=k;a++)
            {
                for(int b=0;b<first;b++)
                {
                    if(a==island[b]&&visited[a-1]!=9999)
                    {
                        visited[a-1]=9999;
                        count1++;

                    }
                }
            }

            if(count1==k)
            {
                count2++;

            }


        }
        if(count2==0)
        {
            cout<<"sad\n";
        }
        else if(count2==1)
        {
            cout<<"all\n";
        }
        else
        {
            cout<<"some\n";
        }
    }
    return 0;
}
