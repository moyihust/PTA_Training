#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string days[]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
int main() {
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    char a,b;
    int tag=0,c;
    for(int i=0;i<min(s1.length(),s2.length());i++)
    {
        if(s1[i]==s2[i]&&tag==0&&s1[i]>='A'&&s1[i]<='G')
        {
            a=s1[i];
            tag=1;
        }else
        if(s1[i]==s2[i]&&(tag==1)&&((s1[i]>='A'&&s1[i]<='N')||(s1[i]>='0'&&s1[i]<='9')))
        {b=s2[i];tag++;}
    }
    int h=0;
    for(int i=0;i<min(s3.length(),s4.length());i++)
    {
        if(s3[i]==s4[i]&&(s3[i]>='A'&&s3[i]<='Z'||s3[i]>='0'&&s3[i]<='9'||s3[i]>='a'&&s3[i]<='z')&&h==0)
        {
            c=i;
            h++;
        }
    }
    cout<<days[a-'A']<<' ';
    if(b>='0'&&b<='9')
    cout<<'0'<<b<<":";
    else cout<<10+b-'A'<<":";
    if(c>9)cout<<c;
    else cout<<"0"<<c;
}
// 64 位输出请用 printf("%lld")