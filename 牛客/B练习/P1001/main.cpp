#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<cstdio>
using namespace std;
class penut
{
    public:
    int col;
    int row;
    int val;
    penut(int c,int r,int v)
    {
        col=c;
        row=r;
        val=v;
    }
};
bool compare(penut p,penut t)
{
    if(t.val>p.val)
    {
        return true;
    }
    return false;
}
void sort(vector<penut> &p)
{
    for(int i=0;i<p.size();i++)
    {
        for(int j=i+1;j<p.size();j++)
        {
            if(compare(p[i],p[j]))
            {
                penut temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
}
int main()
{
    int n,m,k;
    while(scanf("%d %d %d",&n,&m,&k)!=EOF)
    {
    vector<penut> p;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int v;
            cin>>v;
            p.push_back(penut(i,j,v));
        }
    }
    sort(p);
    int sum=0;
    int time=0;
    if(time+p[0].col+1<=k&&p[0].val!=0)
    {sum+=p[0].val;
    time+=p[0].col+1;
    int l=0;
    while(time+p[l+1].col+1+abs(p[l+1].col-p[l].col)+abs(p[l].row-p[l].row)+3<=k&&p[l+1].val!=0)
    {
        sum+=p[l+1].val;
        time+=abs(p[l+1].col-p[l].col)+abs(p[l].row-p[l].row)+4;
        l++;
    }}
    cout<<sum<<endl;
    }
}