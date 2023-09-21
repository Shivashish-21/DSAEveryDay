#include <bits/stdc++.h>
using namespace std;

void pattern15(int n)
{
    for (int i = 0; i < n; i++)
    {
        char alph = 65;
        for (int j = n - i - 1; j >= 0; j--)
        {

            cout << alph << " ";
            alph = alph + 1;
        }
        cout << endl;
    }
}

int main()
{
    pattern15(5);
    return 0;
}