#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream datafile;
	datafile.open("example.txt",ios::app);
	datafile<<"Nikhil\n";
	datafile<<"Aaryan\n";
	datafile.close();
	return 0;
}
