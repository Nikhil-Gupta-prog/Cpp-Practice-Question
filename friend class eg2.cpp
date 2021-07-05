#include<iostream>
#include<conio.h>
using namespace std;
class first
{
	int a;
	friend class second;
	 public:
	 	void input()
	 	{
	 		cout<<"enter the value of a"<<endl;
	 		cin>>a;
		} 
};

class second 
{
	int b;
	  public:
	    void input()
	    {
	    	cout<<"enter the value of b"<<endl;
	 		cin>>b;
		}
		void max(first f)
		{
			if(f.a>b)
			cout<<"a of class first is greater";
			else
			cout<<"b of class second is greatest";
		}
};

int main()
{
	first f;
	second s;
	f.input();
	s.input();
	s.max(f);
	return 0;
}
