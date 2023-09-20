#include <bits/stdc++.h>
using namespace std;

void pattern4(int N)
{
    for (int i = 1; i < N + 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
int main()
{
    pattern4(5);
    return 0;
}