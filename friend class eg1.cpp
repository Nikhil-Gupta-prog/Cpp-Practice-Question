#include<iostream>
using namespace std;
class rectangle
{
	int l,b;
	 public:
	 	rectangle()
	 	{
	 		l=10;
	 		b=20;
		}
	friend class square; 
};

class square
{
	int s;
	public:
		square()
		{
			s=5;
		}
	void display(rectangle rect);
};

void square:: display(rectangle rect)
{
	cout<<"\n\n length :"<<rect.l;
    cout<<"\n\n width :"<<rect.b;
	cout<<"\n\n side :"<<s;	
}

int main()
{
	rectangle r;
	square s;
	s.display(r);
	return 0;
}
