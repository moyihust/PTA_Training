#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v;
int callaz(int t)
{
    int times = 0;
    while (t != 1)
    {
        if (t % 2)
        {
            t = (3 * t + 1)/2;
            auto t3=remove(v.begin(),v.end(),t);
            v.erase(t3,v.end());
        }
        else
        {
            t = t / 2;
            auto t2=remove(v.begin(),v.end(),t);
            v.erase(t2,v.end());
        }
        times++;
    }
    return times;
}
int main()
{
    int n;
    cin>>n;
    vector <int> tr;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
        tr.push_back(num);
    }
    for(vector <int>::iterator it=tr.begin();it!=tr.end();it++)
    {
        callaz(*it);
    }
    for(int i=0;i<v.size()-1;i++)
    {
        cout<<v[i]<<' ';
    }
    cout<<v[v.size()-1];
}