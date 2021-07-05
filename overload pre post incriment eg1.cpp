#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
	int a;
	 public:
	 	void getdata();
	 	void putdata();
	 	void operator ++();          //pre incriment
	 	void operator ++(int);      //post incriment 
};

  void demo :: getdata()
  {
  	cout<<"enter the value of a\t";
  	cin>>a;
  }
  
  void demo ::putdata()
  {
  	cout<<"\n value of a"<<a;
  }
  
  void demo ::operator ++()
  {
  	a=a+1;
  }
  
  void demo ::operator ++(int)
  {
  	a=a-1;
  }
  
  int main()
  {
  	demo d1,d2;
  	d1.getdata();
  	d2.getdata();
  	++d1;
  	d2++;
  	d1.putdata();
  	d2.putdata();
  	return 0;
  }
