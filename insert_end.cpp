#include<iostream>
using namespace std;

void insert_end(int arr[], int &length,int size,int value)
{
  if(length>=size)
  {
  	cout<<"Array is full, Cannot insert any element"<<endl;
  }
  //inserting at end, i e if length is 6 then array has 0 to 5 indexes
  arr[length]=value;
  length++;
}

void display(int arr[],int length)
{
	cout<<"Updated Array is with : "<<arr[length-1]<<endl;

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

	insert_end(arr1,length,size_of_Array,100);

	display(arr1,length);


}