#include<iostream>
using namespace std;

struct Array
{
	int *A; //array itself
	int size;
    int length;
};


int main()
{
  struct Array arr;
  cout<<"Enter the size of an array: "<<endl;
  cin>>arr.size;
  //Creating an array inside of HEAP
  arr.A=new int[arr.size];
  //creating an array of size arr.size and using pointer A to access it
 //The size of this array is dynamic
  arr.length=0;

  int n,i;
  cout<<"How many numbers you want to store in the array? "<<endl;
  cin>>n;

  cout<<"Enter the elements you want to store in array: "<<endl;
  for(i=0; i<n; i++)
  {
  	cin>>arr.A[i];
  }
  arr.length=n;

  for(int i=0; i<n;i++)
  {
  	cout<<arr.A[i]<<" ";
  }


}