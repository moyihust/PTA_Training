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
        price_per_amount=price/amount;
    }
};
int main()
{
    //种类和总量
    int n,sum;
    cin>>n>>sum;

}