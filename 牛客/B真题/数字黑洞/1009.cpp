#include<iostream>
#include<cstring>
int re(int a[4])
{
    return a[3]*1000+a[2]*100+a[1]*10+a[0];
}
int te(int a[4])
{
    return a[0]*1000+a[1]*100+a[2]*10+a[3];
}
void sort(int a[4])
{
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
void divid(int a,int num[4])
{
    int i=0;
     while(a)
    {
        num[i++]=a%10;
        a/=10;
    }
}
void print(int a[4])
{
    for(int i=3;i>=0;i--)
    {
        std::cout<<a[i];
    }
        std::cout<<" - ";
    for(int i=0;i<4;i++)
    {
        std::cout<<a[i];
    }

    
    std::cout<<' ';
}
int main()
{
    int n;
    std::cin>>n;
    int num[4];
    int i=0;
    memset(num,0,sizeof(num));
   divid(n,num);
    sort(num);
    int a=re(num);
    while(a!=6174)
    {
        print(num);
        std::cout<<"= "<<re(num)-te(num)<<std::endl;
        a=re(num)-te(num);
        divid(a,num);
        sort(num);
    }
    return 0;
}