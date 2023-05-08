#include<iostream>
using namespace std;

int main()
{
    int tag[100]={0};
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0,j=0;i<s1.length();i++)
    {
        if(s1[i]!=s2[j])
        {
            if(s1[i]>='a'&&s1[i]<='z')
            {
                if(tag[s1[i]-'a'+10]==0)
                {
                    cout<<char(s1[i]-'a'+'A');
                    tag[s1[i]-'a'+10]=1;
                }
            }
            else if(s1[i]>='A'&&s1[i]<='Z')
            {
                if(tag[s1[i]-'A'+10]==0)
                {
                    cout<<char(s1[i]);
                    tag[s1[i]-'A'+10]=1;
                }
            }
            else if(s1[i]>='0'&&s1[i]<='9')
            {
                if(tag[s1[i]-'0']==0)
                {
                    cout<<char(s1[i]);
                    tag[s1[i]-'0']=1;
                }
            }else
            {
                if(s1[i]=='_'&&tag[36]==0)
                {
                    cout<<'_';
                    tag[36]=1;
                }
            }
        }
        else
        {
            j++;
        }
    }
}