#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    int divied=0,divisor=0;
    int b;
    cin>>a>>b;
    string ans(1000,'0');
    for(int i=0;i<a.length();i++)
    {
         divied=(a[i]-'0'+divisor*10)/b;
         divisor=(a[i]-'0'+divisor*10)%b;
         ans[i]=divied+'0';
    }
    int i=0;
    while(ans[i]=='0')
    {
        i++;
    }
    for(;i<a.length();i++)
    {
        cout<<ans[i];
    }
    cout<<' '<<divisor;
}