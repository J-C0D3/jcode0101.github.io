#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int X[t];
    int prizemoney[t] = {0};

    for (int i = 0; i < t; i++)
    {
        cin >> X[i];
        string str;
        cin >> str;
        int carlpoint = 0, chefpoint = 0;
        for (int r = 0; r < 14; r++)
        {

            if (str[r] == 'C')
            {
                carlpoint = carlpoint + 2;
            }
            else if (str[r] == 'N')
            {
                chefpoint = chefpoint + 2;
            }
            else if (str[r] == 'D')
            {
                chefpoint = chefpoint + 1;
                carlpoint = carlpoint + 1;
            }
        }
        if (carlpoint > chefpoint)
        {
            prizemoney[i] = 60 * X[i];
        }
        else if (carlpoint == chefpoint)
        {
            prizemoney[i] = 55 * X[i];
        }
        else if (carlpoint < chefpoint)
        {
            prizemoney[i] = 40 * X[i];
        }
    }
    // C denotes a victory by Carlsen.
    // N denotes a victory by Chef.
    // D denotes a draw.
    for (int i = 0; i < t; i++)
    {
        cout << prizemoney[i] << endl;
    }
    return 0;
}