#include <bits/stdc++.h>
using namespace std;
void SWAP(int arr[], int length, int i, int j)
{
    // cout<<"Swap function called\n";

    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
bool CheckSort(int arr[], int length)
{
    // cout<<"CheckSort function called\n";

    int j = 1, flag = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > arr[j])
        {
            return false;
        }
        j++;
    }
    return true;
}
int TEST(int arr[], int length)
{
    // cout<<"Test function called\n";
    int l = length;
    if (CheckSort(arr, l))
        return 1;
    else
    {
        // cout<<"Else called\n";
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < length; j++)
            {
                if (i != j && ((arr[i] & arr[j]) != 0))
                {
                    SWAP(arr, l, i, j);
                    if (CheckSort(arr, l))
                    {
                        return 1;
                    }
                    else
                    {
                        if(arr[i]>arr[j])
                        j=i+1;
                    }
                }
            }
        }
        return 0;
    }
}
int main()
{
    int t = 0;
    cin >> t;
    int *N = new int[t];
    int *result = new int[t];
    // int arr[1000];

    for (int i = 0; i < t; i++)
    {
        cin >> N[i];
        int length = N[i];
        int *arr = new int[length];
        for (int a = 0; a < length; a++)
            cin >> arr[a];
        result[i] = TEST(arr, length);
    }

    for (int j = 0; j < t; j++)
    {
        if (result[j] == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    delete[] N;
    delete[] result;
    return 0;
}