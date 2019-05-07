#include<bits/stdc++.h>

using namespace std;

int jump_search(int size, int arr[], int key)
{
	int index=0;
	int upper=0;
	int i;
	for(i=1;i<size;i=i*2)
	{
		if(arr[i]==key)
			return (i+1);
		else if(arr[i]>key)
		{
			upper=i;
			break;
		}
		else
			upper=i;
		index=i;
	}
	if(i>=size)
		upper=size-1;
	for(int j=index+1;j<upper;j++)
	{
		if(arr[j]==key)
			return (j+1);
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
	int position=jump_search(size,arr,key);
	if(position==-1)
		cout<<"\nKey not found";
	else
		cout<<"\nKey found at "<<position<<" position in array";
}
