#include "iostream"
#include <algorithm>
using namespace std;
void h(int N,int p)
{
	int* arr=new int[N];
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
	} 
	sort(arr,arr+N);
	int res=0;
	for(int i=0;i<N;i++)
	{
		for(int j=i+res;j<N;j++)
		{
		   if (arr[j] > arr[i] * p)
                break;
            res++;	
		}
	}
	cout<<res<<endl;
}
int main()
{
	int num,p;
	while(cin>>num>>p)
	{
	   h(num,p);
	 } 
	return 0;
}