#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream datafile;
	char name[81];
	datafile.open("demofile.txt",ios::in);
	if(!datafile)
	{
		cerr<<"FILE OPEN ERROR!"<<endl;
		return 0;
	}
	cout<<"File opened successfully\n";
	cout<<"now reading information from the file.\n\n";
	datafile>>name;
	while(!datafile.eof())
	{
		cout<<name<<endl;
		datafile>>name;
	}
	datafile.close();
	cout<<"\n done.\n";
}
