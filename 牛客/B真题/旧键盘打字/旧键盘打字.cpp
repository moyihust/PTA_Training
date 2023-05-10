#include<iostream>
#include<string>
#include<cstring>
using namespace std;


int main()
{
    //0-9 =》‘0-9’ ‘10-35’ ‘36-40’ “_”（代表空格）、“,”、“.”、“-”、“+”
    bool correct[42]={false};
    string broken,input;
    cin>>broken>>input;
    for(int i=0;i<broken.length();i++)
    {
        if(broken[i]>='a'&&broken[i]<='z')
            correct[broken[i]-'a'+10]=true;
        else if(broken[i]>='A'&&broken[i]<='Z')
            correct[broken[i]-'A'+10]=true;
        else if(broken[i]>='0'&&broken[i]<='9')
            correct[broken[i]-'0']=true;
        else if(broken[i]=='_')
            correct[36]=true;
        else if(broken[i]==',')
            correct[37]=true;
        else if(broken[i]=='.')
            correct[38]=true;
        else if(broken[i]=='-')
            correct[39]=true;
        else if(broken[i]=='+')
            correct[40]=true;
    }
    string output;
    for(int i=0;i<input.length();i++)
    {
        if(input[i]>='a'&&input[i]<='z'&&!correct[input[i]-'a'+10])
            output.push_back(input[i]);
        else if(input[i]>='A'&&input[i]<='Z'&&!correct[input[i]-'A'+10]&&!correct[40])
            output.push_back(input[i]);
        else if(input[i]>='0'&&input[i]<='9'&&!correct[input[i]-'0'])
            output.push_back(input[i]);
        else if(input[i]=='_'&&!correct[36])
            output.push_back(input[i]);
        else if(input[i]==','&&!correct[37])
            output.push_back(input[i]);
        else if(input[i]=='.'&&!correct[38])
            output.push_back(input[i]);
        else if(input[i]=='-'&&!correct[39])
            output.push_back(input[i]);
        else if(input[i]=='+'&&!correct[40])
            output.push_back(input[i]);
    }
    cout<<output<<endl;
}
