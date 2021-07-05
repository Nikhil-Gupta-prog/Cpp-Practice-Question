#include<iostream>
class B;             //forward declaration of class
class A 
{
	public:
		void show(B);    //void show m parameter kyu daala
};
class B
{
	private:
		int b;
	public:
		B() :b(0){}             // ye kiska syntax h? variable initialize ka?
		friend void A::show(B x);    // issme x kya h and kyu h?                                                     //friend function
};

void A::show(B x)
{
	//since show() is friend of B,it can access private member of B
	std::cout<<"B::b= "<<x.b;
}

int main()
{
	A a;
	B x;
	a.show(x);
	return 0;
}
