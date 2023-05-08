#include<iostream>
struct node
{
    int val,next;
}list[100005];

int reverse(int k,int head)
{
    int p=head;
    int q=list[head].next;
    int r=list[q].next;
    for(int i=0;i<k-1;i++)
    {
        list[q].next=p;
        p=q;
        q=r;
        r=list[r].next;
    }
    list[head].next=q;
    return p;
}
int main()
{
    int head,n,k;
    std::cin>>head>>n>>k;
    for(int i=0;i<n;i++)
    {
        int addr,val,next;
        std::cin>>addr>>val>>next;
        list[addr].val=val;
        list[addr].next=next;
    }
    int t=head;
    for(int i=0;i<n/k;i++)
    {
        t=reverse(k,t);
    }
    int p=head;
    while(p!=-1)
    {
        std::cout<<p<<" "<<list[p].val<<" "<<list[p].next<<std::endl;
        p=list[p].next;
    }
    return 0;
}