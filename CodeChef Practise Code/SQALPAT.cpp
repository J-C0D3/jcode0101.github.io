#include <iostream>
using namespace std;

int main()
{
    int n, count = 1, var;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int a = count; a <= 5 * i; a++)
            {
                cout << count << " ";
                count++;
            }
            cout << endl;
            count = count + 4;
            var = count - 4;
        }
        else if (i % 2 == 0)
        {
            for (int b = count; b >= var; b--)
            {
                cout << count << " ";
                count--;
            }
            cout << endl;
            count = count + 6;
        }
    }
    return 0;
}
