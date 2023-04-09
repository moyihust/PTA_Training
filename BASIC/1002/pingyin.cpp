#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string input;
    cin>>input;
    string name[10]={"lin","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int sum=0;
    for(int i=0;i<input.length();i++)
    {
        sum+=input[i]-'0';
    }
    vector<int> div;
    while(sum>0)
    {
        div.push_back(sum%10);
        sum=sum/10;
    }
    for(int i=div.size()-1;i>0;i--)
    {
        cout<<name[div[i]]<<' ';
    }
    cout<<name[div[0]];
}