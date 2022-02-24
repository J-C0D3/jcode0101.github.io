#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    int *A = new int[testcase];
    int *B = new int[testcase];
    int *X = new int[testcase];
    int *Y = new int[testcase];
    for (int a = 0; a < testcase; a++)
    {
        cin >> A[a] >> B[a] >> X[a] >> Y[a];
    }
    for (int a = 0; a < testcase; a++)
    {
        if (X[a] * Y[a] >= A[a] * B[a])
            cout << "YES\n";
        else
            cout << "No\n";
    }
    delete[] A;
    delete[] B;
    delete[] X;
    delete[] Y;
    return 0;
}
