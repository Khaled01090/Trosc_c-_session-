#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    char c;
    cin >> c;
    if (c == '+')
    {
        cout << a + b;
    }
    else if (c == '-')
    {
        cout << a - b;
    }
    else if (c == '*')
    {
        cout << a * b;
    }
    else if (c == '/')
    {
        cout << a / b
    }

    return 0;
}
