#include<iostream>
using namespace std;
int main()
{

    int j,choice=1,n,start,length,count1=0;;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=0;
    }
    do{
    cin>>start;
    cin>>length;
    int x;
    x=length;
    for(j=(start-1);j<(x+(start-1))&&(x+(start-1))<n;j++)
    {

        if(a[j]==0){
        a[j]=1;
        cout<<"file->"<<j+1;
        count1++;
        }
        else
        {
            x++;
        }

    }
    cout<<"do u want to continue(1/0)";
    cin>>choice;}
    while(choice==1);
    return 0;
}
