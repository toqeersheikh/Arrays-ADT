#include<iostream>
using namespace std;

void delete_start(int arr[], int &length)
{
	if(length==0)
	{
		cout<<"Array is empty, cannot delete"<<endl;
	}

	//shift all elements from right to left

	for(int i=0;i<length-1;i++)
	{
		arr[i]=arr[i+1];
	}

	//decrease length
	length--;
}

void display(int arr[],int length)
{
	cout<<"Updated Array is: "<<endl;

	for(int i=0; i<length; i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int size_of_Array=10;
	int arr1[size_of_Array]={23,10,99,15};
	int length=4;


   delete_start(arr1,length);

   display(arr1,length);
}