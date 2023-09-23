#include <bits/stdc++.h>
using namespace std;

vector<int> printNos(int x)
{
    vector<int> a;
    if (x == 0)
    {
        return a;
    }
    else
    {
        a = printNos(x - 1);
        a.push_back(x);
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
    vector<int> v = printNos(6);
    // cout << v;
    print(v);
    return 0;
}
