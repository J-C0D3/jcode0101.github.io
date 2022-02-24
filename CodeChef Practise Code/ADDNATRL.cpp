#include <iostream>
using namespace std;

int main() {
	int long n,sum=0; // 1<=N<=10^6 long
    cin>>n;
    for(int i=1;i<=n;i++)
    sum=sum+i;
    cout<<sum;
	return 0;
}
