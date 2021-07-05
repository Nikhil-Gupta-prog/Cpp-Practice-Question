#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	int n;
	 public:
	  A();      
	  A(int);
	  void getdata();
	  void display();
	  ~A();
};

A::A()
{
	n=0;
}

A::A(int n1)
{
	n=n1;
}

void A::getdata()
{
	cout<<"enter a no";
	cin>>n;
}

void A::display()
{
	cout<<n<<endl;
}

A::~A()
{
	cout<<"hi";
}
 
 int main()
 {
 	A *p;
 	p=new A(5);            //new will call constructor and constructor will create object(member & initialize)
 	p->display();
 	delete p;              //delete will call destructor which will destroy object
 	cout<<"\n hello";
 	return 0;
 }
