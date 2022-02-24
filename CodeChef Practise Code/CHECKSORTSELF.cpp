#include<iostream>
using namespace std;
bool CheckSort(int arr[],int length)
{
    int j=1,flag=0;
    for(int i=0;i<length;i++)
    {
        if(arr[i]>arr[j])
        {
            return false;
        }
        j++;
    }
    return true;
}
int main()
{
    int arr[]={1,2,3,5,4};
    if(CheckSort(arr,5))
    cout<<"Sorted\n";
    else
    cout<<"Not Sorted\n";
    return 0;
}