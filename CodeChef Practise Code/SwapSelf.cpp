#include<bits/stdc++.h>
using namespace std;
void SWAP(int arr[], int length, int i, int j)
{
    cout<<"Swap function called\n";

    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int main()
{
    int arr[]={1,3,2};
    SWAP(arr,3,1,2);
    for(int i=0;i<3;i++)
    cout<<arr[i]<<" ";
    return 0;
}