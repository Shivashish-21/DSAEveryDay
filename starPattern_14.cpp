#include <bits/stdc++.h>
using namespace std;

void pattern14(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char alphabet = 65;
        for (int j = 1; j <= i; j++)
        {
            cout << alphabet << " ";
            alphabet = alphabet + 1;
        }
        cout << endl;
    }
}

int main()
{
    pattern14(5);
    return 0;
}