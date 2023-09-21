#include <bits/stdc++.h>
using namespace std;

void pattern7(int n)
{
    int m = (2 * n - 1) / 2;
    int e = m * 2;
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int j = m; j < e; j++)
        {
            cout << " ";
        }
        cout << endl;
        m--;
    }
}

// int main()
// {
//     pattern7(5);
//     cout << "hi";
//     return 0;
// }