#include"sort.h"
#include<iostream>
using namespace std;
int main()
{
    int a[10]={4,5,3,4,11,6,7,8,9,0};
    mergeSort(a,0,10);
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<endl;
    return 0;
}