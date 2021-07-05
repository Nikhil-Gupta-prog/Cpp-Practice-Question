#include<iostream>
#include<conio.h>
using namespace std;
class parent              //base class
{
	public:
		parent(int i)     //base class's parameterised constructor
		{
			int x=i;
			cout<<"inside base class's parameterised constructor="<<x<<endl;
		}
};
    // sub class
 
 class child : public parent
 {
 	int y;
 	   public:
 	  child(int j) : parent(j)          //sub class's parameterised constructor
	    {
	   	  y=j;
	   	  cout<<"inside sub class's parameterised constructor="<<y<<endl;
	    }	
 };
 
 // main function
 
 int main()
 {
 	child obj(10);                 //creating object of class child
 	return 0;
 }
