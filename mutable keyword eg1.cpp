#include<iostream>
#include<conio.h>
using namespace std;
class A
{
     int i;
	mutable int j;
	public:
		A()
		{
			i=0;
			j=0;
		}
    void function() const
    {
    //	i++;      //will give error
    	j++;      // works bcoz j is mutable
	}
	void show() const
	{
		cout<<i<<endl;
		cout<<j<<endl;
	}
};
 int main()
 {
 	const A obj;
 	obj.function();
 	obj.show();
 }
