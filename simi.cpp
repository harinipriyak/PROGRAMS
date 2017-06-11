#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    long long t,i,j,k,count1=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        count1=0;
        char str1[4][10001];
        char str2[4][10001];
        cin>>str1[0];
        cin>>str1[1];
        cin>>str1[2];
        cin>>str1[3];
        cin>>str2[0];
        cin>>str2[1];
        cin>>str2[2];
        cin>>str2[3];
        for(j=0;j<4;j++)
        {
            for(k=0;k<4;k++)
            {
                if(!strcmp(str1[j],str2[k]))
                   count1++;
            }
        }

        if(count1==2||count1>2)
        {
            cout<<"similar\n";
        }
        else
        {
             cout<<"dissimilar\n";
        }
    }
    return 0;
}
