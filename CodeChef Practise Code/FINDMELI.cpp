#include <iostream>
using namespace std;

int main() {
	// your code goes here
    //  sort(arr, arr + n); To sort array in ascending order by default
    // sort(arr, arr + n, greater<int>()); To sort array in descendiong order
    int n,k,flag=0;
    cin>>n>>k;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(k==arr[i])
        {
            flag=1;
            cout<<"1";
            break;
        }
    }
    if(flag==0)
    {
        cout<<"-1";
    }

 
 
	return 0;
}
