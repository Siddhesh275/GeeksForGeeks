#include <iostream>
using namespace std;

void rotate1(int arr[],int n)
{
    int temp=0;
     temp=arr[0];
        //cout<<temp;
        for(int j=0;j<n-1;j++)
        {
           arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
}
void function1()
{
    int n=0,n1=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>n1;
    for(int i=0;i<n1;i++)
    {
        rotate1(arr,n);
    }
      for(int i=0;i<n;i++)
   {
        cout<<arr[i]<<" ";
   }
   cout<<endl;
}

int main()
{
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        function1();
    }

}
