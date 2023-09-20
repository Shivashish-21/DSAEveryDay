#include <bits/stdc++.h>
using namespace std;

void pattern5(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = N; j > i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    pattern5(5);
    return 0;
}