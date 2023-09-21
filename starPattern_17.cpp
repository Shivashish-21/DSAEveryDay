#include <bits/stdc++.h>
using namespace std;
void pattern17(int n)
{
    char revAlphabet = 65;
    for (int i = 0; i < n; i++)
    {
        char alphabet = 65;
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << alphabet;
            alphabet = alphabet + 1;
        }
        char x = revAlphabet + i - 1;
        for (int j = 0; j < i; j++)
        {
            cout << char(x);
            x = x - 1;
        }
        cout << endl;
    }
}

int main()
{
    pattern17(4);
    return 0;
}