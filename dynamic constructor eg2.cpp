#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class string
{
	char *name;
	int length;
	public:
	  string()
	  {
		length=0;
	  
		name= new char[length+1];
	  }
		string(char *s)
		{
		length=strlen(s);
		}
		void display()
		{
		 cout<<name<<endl;
		}	
		void join(string , string);
};

void string::join(string &a,string &b)
{
	length=a.length+b.length;
	delete name;
	name=new char[length+1];
	strcpy(name,a.name);
	strcpy(name,b.name);
}

int main()
{
	char *first="Ram";
	string name1(first),name2("nikhil"),name3("nik");
	s1.join(name1,name2);
	s2.join(s1,name3);
	name1.display();
	name2.display();
	name3.display();
	s1.display();
	s2.display();
	return 0;
}
