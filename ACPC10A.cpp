#include<iostream>
using namespace std;
int main()
{
    int a[4],i=0,d,r,k=1;
    if(k==1)
    {
    do{i=0;
    do
    {
        cin>>a[i];
        i++;
    }while(i<3);
    if(a[0]!=a[1]&&a[1]!=a[2]&&a[2]!=a[0]){
    if(a[1]-a[0]==a[2]-a[1])
    {
        if((a[0]==0&&a[1]!=0&&a[2]!=0)||(a[1]==0&&a[2]!=0&&a[0]!=0)||(a[2]==0&&a[0]!=0&&a[1]!=0)||a[0]!=0&&a[1]!=0&&a[2]!=0)
        {
            d=a[1]-a[0];
            a[3]=a[0]+(d*3);
            cout<<"AP\t"<<a[3];
        }
    }
    else
    {
        if(a[0]!=0&&a[1]!=0&&a[2]!=0)
        {
            if(a[1]/a[0]==a[2]/a[1])
            {
                r=a[1]/a[0];
                a[3]=a[0]*r*r*r;
                cout<<"GP\t"<<a[3];
            }
        }
    }}
    if(a[0]==0&&a[1]==0&&a[2]==0)
    {
        k=0;
    }
    else
    k=1;
    cout<<"\n";
    }while(k==1);}
    else
    {
        for(i=0;i<3;i++)
        {
            cin>>a[i];
        }
    }
    return 0;
}
