#include<iostream>
using namespace std;

int main()
{
	int i, n;
	cout<<"Enter the number of elements: \t";
        cin>>n;

 	int *arr=new int[n];
 	for(i=0; i<n; i++)
	{
	cout<<"\nEnter the element: ";
	cin>>arr[i];
	}

	int add= (n*(n+1))/2;
	
	int arr_sum=0;
	for(i=0; i<n; i++)
	arr_sum=arr_sum +arr[i];

	int res= add - arr_sum;
	cout<<"Missing number is "<<res<<endl;
	
	delete[] arr;
	return 0;
}

