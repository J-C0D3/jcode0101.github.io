#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int last=n-1;
    int *arr1 = new int[n];
    int *arr2 = new int[n];

    for(int i=0;i<n;i++)
    cin>>arr1[i];
    
    // Reverse Array
    for(int i=0;i<n;i++)
    {
        arr2[i]=arr1[last];
        last--;
    }
    // Print the output
    for(int i=0;i<n;i++)
    cout<<arr2[i]<<" ";

    delete[] arr1;
    delete[] arr2;
    return 0;
}