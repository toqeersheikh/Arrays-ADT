#include<iostream>
using namespace std;

//Inserting the given element at beginning
void insert_begin(int arr[],int &length,int size, int value)
{
	if(length>=size)
	{
		cout<<"Array is full! Cannot insert anymore elements..."<<endl;
	}

	//Shift elements to the right to create free space at arr[0]

	for(int i=length;i>0;i--)
	{
		arr[i]=arr[i-1];
		//copy value of each element from its previous element until 0 index
	}

	//insert at beginning
	arr[0]=value;

	//increment the length
	length++;
}
void display(int array[],int length)
{
    cout<<"Updated array is: "<<endl;
	for(int i=0;i<length; i++)
	{
		cout<<array[i]<<" ";
	}
}

int main()
{
	int size_of_array=10; //actual capacity
	int arr1[size_of_array]={11,12,13,14,15};
	int length_array=5; //elements present in the array

	//Capacity is 10 but size is 5

    //calling the insert at begin function
    insert_begin(arr1,length_array,size_of_array,900);

    display(arr1,length_array);

    return 0;


}