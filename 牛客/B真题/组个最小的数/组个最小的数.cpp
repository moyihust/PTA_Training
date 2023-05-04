#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    int a[10]={0};
    int t;
    for(int i=0;i<10;i++)
    {
        cin>>t;
        a[i]=t;
    }
    string ans;
    int index=1;
    while (a[index]==0)
    {
        index++;
    }
    ans+=to_string(index);
    a[index]--;
    for (int i = 0; i < 10; i++)
    {
        while (a[i]>0)
        {
            ans+=to_string(i);
            a[i]--;
        }
    }
    cout<<ans;
}