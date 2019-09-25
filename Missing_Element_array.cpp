#include <iostream>
#include <algorithm>
using namespace std;

void missing()
{
    int n=0;
    cin>>n;
    int arr[n];
    for(int i=1;i<n;i++)
	{
	    cin>>arr[i];
	}
	int sum=0;
	for(int i=1;i<n;i++)
	{
	    sum=sum+arr[i];
	}
	int sum1=0;
	for(int i=1;i<=n;i++)
	{
	    sum1=sum1+i;
	}
	int ans=sum1-sum;
	cout<<ans<<endl;

}
int main() {
	//code
	int n=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    missing();
	}
	return 0;
}

/*

*/
