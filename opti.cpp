#include<iostream>
using namespace std;
int main()
{
    int pages[100],frames[10],temp[10],flag1=0,flag2=0,flag3=0,fr,n,max1,faults=0,pos;
    cin>>n;
    cin>>fr;
    for(int i=0;i<n;i++)
    {
        cin>>pages[i];
    }
    for(int j=0;j<fr;j++)
    {
        frames[j]=-1;
    }
    for(int i=0;i<n;i++)
    {flag1=0;
    flag2=0;
        for(int j=0;j<fr;j++)
        {
            if(frames[j]==pages[i]){
                flag1=1;
            flag2=1;
           break;}
        }
        if(flag1==0)
        {
            flag2=0;
            for(int j=0;j<fr;j++){
            if(frames[j]==-1)
            {
                faults++;
                frames[j]=pages[i];
                flag2=1;

                break;
            }}
            if(flag2==0)
            {
                flag3=0;
                for(int j=0;j<fr;j++)
                {
                    temp[j]=-1;
                    for(int k=i+1;k<n;k++)
                    {
                        if(frames[j]==pages[k])
                        {
                            temp[j]=k;
                            break;
                        }
                    }

                }
                for(int j=0;j<fr;j++)
                {
                    if(temp[j]==-1)
                    {
                        pos=j;
                        flag3=1;
                        break;
                    }
                }
                if(flag3==0)
                {
                    max1=temp[0];
                    pos=0;
                    for(int j=1;j<fr;j++)
                    {
                        if(temp[j]>max1)
                        {
                            max1=temp[j];
                            pos=j;
                        }
                    }
                }
                frames[pos]=pages[i];
                faults++;
            }
        }
    }
    cout<<"\npage faults->"<<faults;
}
