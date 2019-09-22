void function1()
{
    int n=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //int count=0;
    for(int i=0;i<n-1;i++)
	{
	    if(arr[i]>arr[i+1])
	    {
	         //arr1[count]=arr[i+1];
	         cout<<arr[i+1]<<" ";
	         //count++;
	    }
	    else
        {
            //arr1[count]=-1;
            cout<<"-1 ";
            //ount++;
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
