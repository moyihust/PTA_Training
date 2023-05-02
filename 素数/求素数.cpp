#include<iostream>
using namespace std;
int is_prime(int n) {
	for (int i = 2, I = sqrt(n); i <= I; i++) {//这里用I对sqrt(n)的结果进行存储，就不需要每次判断的时候去计算了
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main()
{
    int b=0;
    for(int i=1;i<=10010;b++)
    {
        if(is_prime(b))
        {
            cout<<b<<',';
            i++;
        }
    }
    
}