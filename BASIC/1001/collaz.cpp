#include <iostream>
using namespace std;
int callaz(int t)
{
    int times = 0;
    while (t != 1)
    {
        if (t % 2)
        {
            t = (3 * t + 1)/2;
        }
        else
        {
            t = t / 2;
        }
        times++;
    }
    return times;
}
int main()
{
    int n;
    cin >> n;
    cout << callaz(n);
}