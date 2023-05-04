#include<iostream>
#include<string>
using namespace std;
int main()
{
    string input,output;
    cin>>input;
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
            for (int i = 0; i < stoi(xishu)-degn; i++)
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
}
