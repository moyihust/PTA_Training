#include <iostream>
#include<math.h>
using namespace std;
// 打印沙漏
void printall(int n, char c)
{
    for (int i = n; i >= 0; i--)
    {
        if (i % 2)
        {
            for (int j = 1; j <= (n-i)/2; j++)
            {
                cout << ' ';
            }
            for (int j = 1; j <= i; j++)
            {
                cout << c;
            }
            cout << endl;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (i % 2)
        {
            for (int j = 1; j <= (n-i)/2; j++)
            {
                cout << ' ';
            }
            for (int j = 1; j <= i; j++)
            {
                cout << c;
            }
            cout << endl;
        }
    }
}
int main()
{
    int n;
    char c;
    cin >> n >> c;
    int div=sqrt((n+1)/2);
    int remain=n-2*div*div+1;
    printall(2*div-1, c);
    cout<<remain;
    return 0;
}