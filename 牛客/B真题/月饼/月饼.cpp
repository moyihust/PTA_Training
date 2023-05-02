#include<iostream>
#include<vector>
using namespace std;
class mooncake
{
    public:
    int amount;
    int price;
    double price_per_amount;
    mooncake(int a,int p)
    {
        amount=a;
        price=p;
        price_per_amount=price*1.0/amount;
    }
};
void sort(vector<mooncake> &v)
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i].price_per_amount<v[j].price_per_amount)
            {
                mooncake temp=v[i];
                v[i]=v[j];
                v[j]=temp;
            }
        }
    }
}
int main()
{
    //种类和总量
    int n,sum;
    cin>>n>>sum;
    vector<mooncake> v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(mooncake(a,0));
    }
    for(int i=0;i<n;i++)
    {
        int price;
        cin>>price;
        v[i].price=price;
        v[i].price_per_amount=v[i].price*1.0/v[i].amount;
    }

    sort(v);
    double profit=0;
    while(sum)
    {
        if(sum>=v[0].amount)
        {
            profit+=v[0].price;
            sum-=v[0].amount;
        }
        else
        {
            profit+=v[0].price_per_amount*sum;
            sum=0;
        }
        v.erase(v.begin());
    }
    printf("%.2lf",profit);
}