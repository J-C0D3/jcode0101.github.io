#include<bits/stdc++.h>
using namespace std;
int CHECKFOUR(int n)
{
    int count=0;
    while(n)
    {
        int var=n%10;
        if(var==4)
        count++;
        n=n/10;
    }
    return count;
}
int main()
{
    int t,number;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)
    {
        cin>>number;
        arr[i]=CHECKFOUR(number);
    }
    for(int i=0;i<t;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}