#include <iostream>
using namespace std;

void leader()
{
    int n=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int j=0;
    for(int i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
                continue;
            else
                break;
        }
        if(j==n)
        {
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    //cout << "Hello world!" << endl;
    int t=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        leader();
    }
    return 0;
}


/*
Above Code Exceeds Time Limit So I got this one and Problem Solved
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	       cin>>a[i];
	   int max=a[n-1];
	   for(int i=n-2;i>=0;i--)
	   {
	       if(a[i]>=max)
	          max=a[i];
	       else
	          a[i]=-1;
	   }
	   for(int i=0;i<n;i++)
	     if(a[i]!=-1)
	     cout<<a[i]<<" ";
	   cout<<endl;
	}
	return 0;
}*/
