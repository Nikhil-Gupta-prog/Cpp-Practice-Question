//this program uses precision member function 
//file stream object to format file output
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream datafile;
	float num = 123.456745689;
	datafile.open("numfile.txt");
	if(!datafile)
	{
		cout<<"file open error"<<endl;
		return 0;
	}
	datafile.precision(5);
	datafile<<num<<endl;
	datafile.precision(4);
	datafile<<num<<endl;
	datafile.precision(3);
	datafile<<num<<endl;
}
