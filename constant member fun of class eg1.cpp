#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	const int x;
	int y;
	 public:
	 	 A():x(5)
	 	 {
	 	 	//x=5;
		  }
    void hello()
    {
    	cout<<"hello\n";
	}
    
    void showdata() const// function
    {
      //hello();   //a const object can only call a const member function    
		cout<<x;
    	
	}
};

int main()
{
	A a;
	a.hello();
	a.showdata();
	return 0;
}
