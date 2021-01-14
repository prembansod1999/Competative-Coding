#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n)
{
	int temp;
	int s = 0;
	int e = n-1;
	while(s<e)
	{
		temp = arr[s];
		arr[s] = arr[e];
		arr[e] = temp;
		s++;
		e--;
	}
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
	int arr[] = {2,5,8,1,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Original Array = ";
	print(arr,n);
	reverse(arr,n);
	cout<<"Reverse Array = ";
	print(arr,n);
	return 0;
}
