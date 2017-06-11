#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        long long l,count2=0,count1=0,flag=0,flag1=0;
        l=s.length();
        char sa[10001];
        for(int j=0;j<l;j++)
        {
            sa[j]=s[i];
        }
        long long high1=l/2,high=l/2;
        if(l%2==0){
        while(flag==1||flag1==1)
        {
            for(int y=0;y<high;y++)
            {
                if(!strcmp(sa[y],sa[y+1])){
                    flag=1;
                    }
                    else
                    {
                        high=high/2;
                    }
            }
            for(int m=high1;m<l;m++)
            {
                if(!strcmp(sa[m],sa[m+1]))
                {
                    flag1=1;

                }
                else
                {
                    high1=high1/2;
                }
            }
            count1++;
        }
        cout<<count1<<endl;
       }
    else
    {
        cout<<"-1"<<endl;
    }
    }
    return 0;
}
