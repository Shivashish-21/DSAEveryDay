#include <bits/stdc++.h>
using namespace std;

void pattern2(int N)
{
    for (int i = 1; i < N + 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    pattern2(5);
    return 0;
}
