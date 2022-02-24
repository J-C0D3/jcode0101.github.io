#include <iostream>
using namespace std;
int main()
{
    int a, b, c, first, second;
    cin >> a >> b >> c;
    if (a >= b && a >= c)
        first = a;
    else if (b >= c)
        first = b;
    else
        first = c;
    if (first == a)
    {
        if (b >= c)
            second = b;
        else
            second = c;
    }
    else if (first == b)
    {
        if (a >= c)
            second = a;
        else
            second = c;
    }
    else
    {
        if (a >= b)
            second = a;
        else
            second = b;
    }
    cout << second;
    return 0;
}