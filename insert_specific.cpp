#include<iostream>
using namespace std;

void insert_specific(int arr[], int &length,int size, int value, int index)
{
	if(length>=size)
	{
		cout<<"Array is Full, Cannot insert any more elements"<<endl;
	}

	//shift elements from given index to right

	for(int i=length;i>index;i--)
	{
		arr[i]=arr[i-1];
		//copy each value from it's previous index until it reaches the given index
	}

    //insert at given index
	arr[index]=value;
	length++;

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


   insert_specific(arr1,length,size_of_Array,100,2);

   display(arr1,length);
}