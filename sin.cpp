#include<iostream>
#include<string.h>
using namespace std;
class fil
{
public:
    char fname[10];
};
class md
{
    public:
    fil f[10];
    int nf;
    char mname[10];
}m[10];
int main()
{
    int nm;
    char x[10];
    cin>>nm;
    for(int i=0;i<nm;i++)
    {
        cin>>m[i].mname;
        cin>>m[i].nf;
        for(int j=0;j<m[i].nf;j++)
        {
            cin>>m[i].f[j].fname;
        }
    }
    cin>>x;
    for(int i=0;i<nm;i++)
    {
        for(int j=0;j<m[i].nf;j++)
        {
            if(!strcmp(x,m[i].f[j].fname))
                cout<<"/"<<m[i].mname<<"/"<<m[i].f[j].fname;
        }
    }
}
