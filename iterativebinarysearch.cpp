#include<bits/stdc++.h>

using namespace std;

int main()
{
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
		cin>>arr[i];
	int key;
	cin>>key;
	int mid;
	int left=0;
	int right=size-1;
	mid=left+(right-left)/2;   //to avoid overflow
	while(left<=right)
	{
		if(arr[mid]==key)
		{
			cout<<"\nKey is found at "<<mid+1<<"position";
			break;
		}
		else if(arr[mid]>key)
			right=mid-1;
		else
			left=mid+1;
		mid=left+(right-left)/2;
	}
	if(left>right)
		cout<<"\nKey not found";
}
