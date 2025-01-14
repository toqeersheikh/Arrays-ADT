#include<iostream>
using namespace std;

void delete_end(int arr[], int &length)
{
	if(length==0)
	{
		cout<<"Array is empty! Cannot delete."<<endl;
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


   delete_end(arr1,length);

   display(arr1,length);
}