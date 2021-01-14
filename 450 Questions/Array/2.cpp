#include<bits/stdc++.h>
using namespace std;
void findMaxAndMin(int arr[],int n)
{
	int min = INT_MAX, max = INT_MIN;
	for(int i = 0;i<n;i++)
	{
		if(min>arr[i])
		{
			min = arr[i];	
		}
		if(max < arr[i])
		{
			max = arr[i];
		}
	}
	cout<<"Min = "<<min<<endl;
	cout<<"Max = "<<max<<endl;
}
void print(int arr[],int n)
{
	for(int i = 0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}	
	cout<<endl;
}
int main()
{
	int arr[] = {5};
	int n = sizeof(arr)/sizeof(arr[0]);
	print(arr,n);
	findMaxAndMin(arr,n);
	return 0;
}
