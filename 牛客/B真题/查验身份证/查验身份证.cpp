#include<iostream>
using namespace std;
#include <string>

char trans[11]={'1','0','X','9','8','7','6','5','4','3','2'};
int weight[18]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2}; // 17位数字的权重

bool isTrue(string credit)
{
    bool tag=1;
    for(int i=0;i<=17;i++)
    {
        if(credit[i]<'0'||credit[i]>'9')
        {
            tag=0;
            break;
        }
    }
    int sum=0;
    for(int i=0;i<=17;i++)
    {
        sum+=(credit[i]-'0')*weight[i];
    }
    if(credit[17]!=trans[sum%11])
    {
        tag=0;
    }
    return tag;
}

int main()
{
    string credit;
    int n;
    cin>>n;
    int isall=1;
    for(int i=0;i<n;i++)
    {
        cin>>credit;
        if(!isTrue(credit))
        {
            cout<<credit<<endl;
            isall=0;
        }
    }
    if(isall)
    {
        cout<<"All passed";
    }
}