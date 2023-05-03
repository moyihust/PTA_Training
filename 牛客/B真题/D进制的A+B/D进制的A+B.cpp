#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a, b, d;
    cin >> a >> b >> d;
    int sum = a + b;
    string ans;
    do
    {
        ans += to_string(sum % d);
        sum /= d;
    } while (sum != 0);
    for (int i = ans.size() - 1; i >= 0; i--)
        cout << ans[i];
    return 0;
}