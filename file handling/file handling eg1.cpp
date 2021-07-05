// this program use the << operator to write information to a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream datafile("demofile.txt");
	if(!datafile)
	{
		cout<<"File open error"<<endl;
		return 0;
	}
	cout<<"File open successfully\n";
	cout<<"Now writting information to the file\n";
	datafile<<"Hello world";
	
	datafile.close();
	cout<<"Done\n";
}
