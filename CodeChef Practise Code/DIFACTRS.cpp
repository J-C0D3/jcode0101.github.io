#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int a=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            arr[a]=i;
            a++;
        }
    }
    cout<<a<<endl;
    for(int i=0;i<a;i++)
    {
        cout<<arr[i]<<" ";
    }

}