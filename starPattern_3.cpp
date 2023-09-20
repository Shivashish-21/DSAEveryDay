#include <bits/stdc++.h>
using namespace std;
void pattern3(int N)
{
    for (int i = 1; i < N + 1; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    pattern3(5);
    return 0;
}