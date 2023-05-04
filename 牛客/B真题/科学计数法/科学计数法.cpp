#include<iostream>
#include<string>
using namespace std;
//将string的科学技术法转换成十进制的string
string sci2dec(string input)
{
    string output;
    if(input[0]=='-')
    output+=input[0];
    int index=0,negxi=0;
    while (input[index]!='E')
    {
        index++;
    }
    string xishu=input.substr(index+1);
    string deg=input.substr(1,index-1);
    int degn=0;
    while (deg[degn]!='.')
    {
        degn++;
    }
    if(stoi(xishu)>0)
    {
        if(degn<=stoi(xishu))
        {
            output+=deg.substr(0,degn);
            output+=deg.substr(degn+1);
            for (int i = 0; i < stoi(xishu)-deg.length()+degn+1; i++)
            {
                output+='0';
            }
        }
        else
        {
            output+=deg.substr(0,stoi(xishu));
            output+='.';
            output+=deg.substr(stoi(xishu),degn-stoi(xishu));
            output+=deg.substr(degn+1);
        }
    }
    else
    {
        output+="0.";
        for (int i = 0; i < -stoi(xishu)-1; i++)
        {
            output+='0';
        }
        output+=deg.substr(0,degn);
        output+=deg.substr(degn+1);
    }
    return output;
}
int main()
{
    string input1;
    cin>>input1;
    string output1;
    output1=sci2dec(input1);
    cout<<output1;
    return 0;
}