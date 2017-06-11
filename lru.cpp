#include<iostream>
using namespace std;
int lru(int time[],int fr)
{
    int mini=time[0],pos;
    for(int i=0;i<fr;i++)
    {
        if(time[i]<mini)
        {
            mini=time[i];
            pos=i;
        }
    }
    return pos;
}
int main()
{
    int n,pages[100],fr,frames[10],i,j,k,counter=0,time[100],pos,flag1=0,flag2=0,faults=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>pages[i];
    }
    cin>>fr;
    for(i=0;i<fr;i++)
    {
        frames[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        flag1=0;flag2=0;
        for(j=0;j<fr;j++)
        {
            if(frames[j]==pages[i])
            {
                counter++;
                time[j]=counter;
                flag1=flag2=1;
                break;
            }
        }
        if(flag1==0)
        {
            for(j=0;j<fr;j++)
            {
                if(frames[j]==-1)
                {
                    faults++;
                    counter++;
                    time[j]=counter;
                    frames[j]=pages[i];
                    flag2=1;
                    break;

                }
            }
        }
        if(flag2==0)
        {
            pos=lru(time,fr);
            faults++;
            counter++;
            frames[pos]=pages[i];
            time[pos]=counter;
        }
    }
    cout<<"pages faults-->"<<faults;
}
