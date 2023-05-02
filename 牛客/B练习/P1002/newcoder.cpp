#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;
int main()
{
    int n, max = 0;
    vector<int> a;
    while (scanf("%d", &n) != EOF)
    {
        a.push_back(n);
        if (max < n)
            max = n;
    }
    vector<int> b(max + 1, 0);
    b[0] = 7;
    b[1] = 11;
    for (int i = 2; i < max; i++)
    {
        b[i] = b[i - 1] + b[i - 2];
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (b[a[i]] % 3)
            printf("No\n");
        else
            printf("Yes\n");
    }
}