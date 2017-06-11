#include<iostream>
using namespace std;
int main()
{
    int p,r,max1[10][10],alloc[10][10],avail[10],need[10][10],i,j,process,comp[10],safeseq[10],count1=0;
    cin>>p;
    cin>>r;
    for(i=0;i<p;i++)
    {
        for(j=0;j<r;j++){
        cin>>max1[i][j];
    }
    }
    for(i=0;i<p;i++)
    {
        for(j=0;j<r;j++){
        cin>>alloc[i][j];
    }


        for(j=0;j<r;j++){
        cin>>avail[j];
    }
for(i=0;i<p;i++)
    {
        for(j=0;j<r;j++){
       need[i][j]=max1[i][j]-alloc[i][j];
    }
    }
    for(i=0;i<p;i++)
    {
        comp[i]=0;
    }
    do
    {
        for(i=0;i<p;i++)
        {
             process=-1;
            if(comp[i]==0)
            {
                process=i;
                for(j=0;j<r;j++)
                {
                    if(avail[j]<need[i][j])
                    {
                        process=-1;
                        break;
                    }
                }
            }
            if(process!=-1)
            {
                safeseq[count1]=process+1;
                count1++;
                for(j=0;j<r;j++)
                {
                    avail[j]=avail[j]+alloc[process][j];
                    alloc[process][j]=0;
                    max1[process][j]=0;
                    comp[process]=1;


                }
            }

        }
    }while(count1!=p&&process!=-1);
    if(count1==p)
    {
        for( i = 0; i < p; i++)
			{
			    cout<<safeseq[i];
			}
			cout<<">\n";
    }
    else	cout<<"\nThe system is in an unsafe state!!";
}
