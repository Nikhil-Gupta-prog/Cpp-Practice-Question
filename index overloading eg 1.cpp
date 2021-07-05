#include<iostream>
#include<conio.h>
using namespace std;
const int size=10;
class A
{
	int arr[size];
	public:
	 A()
	 {
	 	int i;
	 	for(i=0;i<size;i++)
	 	{
	 	arr[i]=i;
	   }
	  }
	int  &operator[](int i)
	{
		if(i>size)
		{
		cout<<"index out of bounds"<<endl;
		//retyrn first element
		return arr[0];
	    }
	 return arr[i];
    } 
};

int main()
{
	A a;
	cout<<"value of a[7] : "<<a[7]<<endl;
	cout<<"value of a[5] : "<<a[5]<<endl;
	cout<<"value of a[12] : "<<a[12]<<endl;
	return 0;
}
