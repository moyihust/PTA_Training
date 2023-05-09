#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int school[100010]={0};
int main()
{
    int n;
    cin>>n;
    int id,score;
    for(int i=0;i<n;i++)
    {
        cin>>id>>score;
        school[id]+=score;
    }
    int max=0;
    int maxid=0;
    for(int i=0;i<100010;i++)
    {
        if(school[i]>max)
        {
            max=school[i];
            maxid=i;
        }
    }
    cout<<maxid<<" "<<max;
}