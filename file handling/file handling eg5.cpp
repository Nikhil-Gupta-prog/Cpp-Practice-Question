//this file shows the getline function with a user specified delimiter 
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream datafile("demofile.txt");
	char input[81];
	while(!datafile.eof())
	{
		datafile.getline(input,81,'$');
		cout<<input<<endl;
	}
	datafile.close();
}
