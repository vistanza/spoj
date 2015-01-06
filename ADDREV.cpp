#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int temp1,temp2,temp3,rev1=0,rev2=0,rev3=0;
        cin>>a>>b;
        do
        {
            temp1=a%10;
            a=a/10;
            rev1=rev1*10+temp1;
        }while(a>0);
        do
        {
            temp2=b%10;
            b=b/10;
            rev2=rev2*10+temp2;
        }while(b>0);
        c=rev1+rev2;
        do
        {
            temp3=c%10;
            c=c/10;
            rev3=rev3*10+temp3;
        }while(c>0);
        cout<<rev3<<"\n";

    }
    return 0;
}
