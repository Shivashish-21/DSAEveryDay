#include <bits/stdc++.h>
using namespace std;

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        int e = 2 * n - i;
        int m = e / 2;
        for (int j = 0; j < m; j++)
        {
            cout << "#";
        }
        for (int j = i + 1; j < i + 2; j++)
        {
            cout << "* ";
        }
        for (int j = m; j < e; j++)
        {
            cout << "$";
        }
        cout << endl;
        e--;
        m--;
    }
}

int main()
{
    pattern7(5);
    return 0;
}