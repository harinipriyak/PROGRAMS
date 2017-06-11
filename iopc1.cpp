#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long l,sarr[100001],count1=0,count2=0,count3=0;
        string s;
        cin>>s;
        l=s.length();

        for(int i=0;i<l;i++)
        {
            sarr[i]=s[i];
        }
        if(l%2==0)
        {
            for(int j=0;j<l/2;j++)
            {

                    if(sarr[j]==sarr[j+1])
                    {
                        count1++;
                        break;
                    }
                    else
                        goto xxx;

            }
           xxx: for(int a=l/2;a<l;a++)
            {

                    if(sarr[a]==sarr[a+1])
                    {
                        count2++;
                        break;
                    }
            }
            cout<<count1<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }

    }
}
