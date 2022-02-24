#include <iostream>
using namespace std;

int main()
{
    int long n, countodd = 0, counteven = 0, sumodd = 0, sumeven = 0;
    cin >> n;
    int i = 1;
    while ((countodd + counteven) != 2 * n)
    {
        if (i % 2 == 0)
        {
            sumeven = sumeven + i;
            counteven++;
            i++;
        }
        else
        {
            sumodd = sumodd + i;
            countodd++;
            i++;
        }
    }
    cout << sumodd << " " << sumeven;
}
