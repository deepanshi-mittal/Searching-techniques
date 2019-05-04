#include<bits/stdc++.h>

using namespace std;

int linear_search(int size, int arr[], int key)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==key)
			return (i+1);
	}
	return -1;
}

int main()
{
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
		cin>>arr[i];
	int key;
	cin>>key;
	int position=linear_search(size,arr,key);
	if(position==-1)
		cout<<"\nKey not found";
	else
		cout<<"\nKey found at "<<position<<" position in array";
}
