#include <bits/stdc++.h>
using namespace std;

vector<int> Nto1(int x)
{
    int count = 0;
    vector<int> a;
    if (count == x)
    {
        return a;
    }
    else
    {
        a = Nto1(x - 1);
        a.insert(a.begin(), x);
        count++;
    }
}
void print(std::vector<int> const &a)
{
    std::cout << "The vector elements are : ";

    for (int i = 0; i < a.size(); i++)
        std::cout << a.at(i) << ' ';
}

int main()
{
    vector<int> v = Nto1(0);
    // cout << v;
    print(v);
    return 0;
}