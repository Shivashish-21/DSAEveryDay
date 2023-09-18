#include <bits/stdc++.h>
using namespace std;
void pattern1(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << "* ";
        }
        cout << endl; // New line for every new row
    }
}

int main()
{
    pattern1(5);
    return 0;
}