#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int spaces=n-i;spaces>0;spaces--)
        {
            cout<<" ";
        }
        for(int star=n-i;star<n;star++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}