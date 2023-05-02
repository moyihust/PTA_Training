#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[3]={0},b[3]={0};
    int awin=0,bwin=0;
    for(int i=0;i<n;i++)
    {
        char a1,b1;
        cin>>a1>>b1;
        if(a1==b1)
        {
            continue;
        }
        else if(a1=='C'&&b1=='J')
        {
            awin++;
            a[1]++;
        }
        else if(a1=='J'&&b1=='B')
        {
            awin++;
            a[2]++;
        }
        else if(a1=='B'&&b1=='C')
        {
            awin++;
            a[0]++;
        }
        else if(a1=='J'&&b1=='C')
        {
            bwin++;
            b[1]++;
        }
        else if(a1=='B'&&b1=='J')
        {
            bwin++;
            b[2]++;
        }
        else if(a1=='C'&&b1=='B')
        {
            bwin++;
            b[0]++;
        }
    }
    cout<<awin<<' '<<n-awin-bwin<<' '<<bwin<<endl;
    cout<<bwin<<' '<<n-awin-bwin<<' '<<awin<<endl;
    int maxa=0,maxb=0;
    for(int i=0;i<3;i++)
    {
        if(a[i]>a[maxa])
        {
            maxa=i;
        }
        if(b[i]>b[maxb])
        {
            maxb=i;
        }
    }
    if(maxa==0)
    {
        cout<<'B';
    }
    else if(maxa==1)
    {
        cout<<'C';
    }
    else if(maxa==2)
    {
        cout<<'J';
    }
    cout<<' ';
    if(maxb==0)
    {
        cout<<'B';
    }
    else if(maxb==1)
    {
        cout<<'C';
    }
    else if(maxb==2)
    {
        cout<<'J';
    }
}