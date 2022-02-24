#include <bits/stdc++.h>
using namespace std;
int main()
{
    int L, R, a = 0;
    cin>>L>>R;
    int arr[L + R];
    for (int i = L; i <= R; i++)
    {
        if (i % 2 != 0)
        {
            arr[a] = i;
            a++;
        }
    }
    for (int i = 0; i < a; i++)
        cout << arr[i] << " ";
    return 0;
}