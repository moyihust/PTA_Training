#include<iostream>
#include<string>
using namespace std;
void iscorrect(string str)
{
    bool tag[2];
    tag[1]=true;
    tag[0]=false;
    for(int i=0;i<str.length();i++)
    {
         if(str[i]=='P'&&i<str.length()-3)
        {
            if(str[i+1]=='A'&&str[i+2]=='A'&&str[i+3]=='T')
            tag[0]=true;
            i+=3;
            
        }else
        if(str[i]=='P'&&i<str.length()-2)
        {
            if(str[i+1]=='A'&&str[i+2]=='T')
            tag[0]=true;
            i+=2;
            
        }
        else if(str[i]=='A'||str[i]==' ')
        {
            continue;
        }
        else
        {
            tag[1]=false;
        }
    }
    if(tag[0]==true&&tag[1]==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    string str;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        iscorrect(str);
    }
}