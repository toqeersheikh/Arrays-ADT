#include<iostream>
using namespace std;

void delete_specific(int arr[], int &length, int index)
{
	if(length==0)
	{
		cout<<"Array is empty cannot delete the given index"<<endl;
	}
	if(index<0 || index>length)
	{
		cout<<"Invalid Index"<<endl;
	}

    //shifting elements
	for(int i=index;i<length-1;i++)
	{
		arr[i]=arr[i+1];
	}

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


   delete_specific(arr1,length,1);

   display(arr1,length);
}