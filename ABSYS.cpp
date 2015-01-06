#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
    string a,b,c,d,e;
    int t,x,y,z,i,j,k;
    cin>>t;
    cout<<endl;
    while(t--)
    {
        cin>>a>>b>>c>>d>>e;
        k=0;
        for(i=1;i<=3;i++)
        {
            if(i==1)
            {
                for(j=0;j<a.length();j++)
                {
                    if(a[j]=='m')
                    {
                    k=i;
                    break;
                    }
                }
            }
            if(i==2)
            {
                for(j=0;j<c.length();j++)
                {
                    if(c[j]=='m')
                    {
                        k=i;
                        break;
                    }
                }
            }
            if(i==3)
            {
                for(j=0;j<e.length();j++)
                {
                    if(e[j]=='m')
                    {
                        k=i;
                        break;
                    }
                }
            }
            if(k>0)
            {
                break;
            }
        }
        if(k==1)
        {
            y=atoi(c.c_str());
            z=atoi(e.c_str());
            x=z-y;
            cout<<x<<" "<<b<<" "<<y<<" "<<d<<" "<<z<<endl;
            continue;
        }
        if(k==2)
        {
            x=atoi(a.c_str());
            z=atoi(e.c_str());
            y=z-x;
            cout<<x<<" "<<b<<" "<<y<<" "<<d<<" "<<z<<endl;
            continue;
        }
        if(k==3)
        {
            y=atoi(c.c_str());
            x=atoi(a.c_str());
            z=x+y;
            cout<<x<<" "<<b<<" "<<y<<" "<<d<<" "<<z<<endl;
            continue;
        }
        else{
            cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
        }
    }
    return 0;
}
