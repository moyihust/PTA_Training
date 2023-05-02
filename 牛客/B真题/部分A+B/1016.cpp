#include<iostream>
using namespace std;
int main()
{
    string a,b;
    char Da,Db;
    int atimes=0,btimes=0;
    cin>>a>>Da>>b>>Db;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]==Da)
        {
            atimes++;
        }
    }
    for(int i=0;i<b.length();i++)
    {
        if(b[i]==Db)
        {
            btimes++;
        }
    }
    int suma=0,sumb=0;
    for(int i=0;i<atimes;i++)
    {
        suma=suma*10+(Da-'0');
    }
    for(int i=0;i<btimes;i++)
    {
        sumb=sumb*10+(Db-'0');
    }
    cout<<suma+sumb;
}