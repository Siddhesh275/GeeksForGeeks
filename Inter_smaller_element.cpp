#include <iostream>
using namespace std;

void function1()
{
    int n=0;
    cin>>n;
    int arr[n];
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<=n-1;i++)
	{
	    if(arr[i]>=arr[i+1])
	    {
	         arr1[count]=arr[i+1];
	         cout<<arr1[count]<<" ";
	         count++;
	    }
	    else
        {
            arr1[count]=-1;
            cout<<arr1[count]<<" ";
            count++;
        }
	}
	cout<<"-1";
	cout<<endl;
   // arr1[count]=-1;
   /* for(int i=0;i<count;i++)
    {
        cout<<arr1[count]<<" ";
    }*/

}
int main()
{
    //cout << "Hello world!" << endl;
    int n1=0;
    cin>>n1;
    for(int i=0;i<n1;i++)
    {
        function1();
    }
    return 0;
}

/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;
	int arr[10]={0},arr1[10]={0};
	for(int i=0;i<num;i++)
	{
	    cin>>arr[i];
	}
	int count=0;
	for(int i=0;i<num;i++)
	{
	    if(arr[i+1]>arr[i])
	    {
	         arr1[count]=arr[i+1];
	         count++;
	    }
	}
	//count++;
	//count++;
	//cout<<arr[num-1]<<" ";
	arr1[count]=arr[num-1];
	for(int i=0;i<=count;i++)
	{
	    cout<<arr1[i]<<" ";
	}
	//cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
 for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>=arr[j])
            {
                break;
            }
            else
            {
                arr1[count]=-1;
            }
        }
        arr1[count]=arr[j];
        count++;
    }

// Write your code here
*/
