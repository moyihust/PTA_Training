#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    string i;
    cin>>i;
    int num[10]={0};
    for(int j=0;j<i.length();j++)
    {
        num[i[j]-'0']++;
    }
    for(int i=0;i<10;i++)
    {
        if(num[i])
        {
            cout<<i<<':'<<num[i]<<endl;
        }
    }
    return 0;
}