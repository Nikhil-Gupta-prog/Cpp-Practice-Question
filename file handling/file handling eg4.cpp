#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream namefile;
	char input[80];
	namefile.open("demofile.txt");
	if(namefile.fail())
    {
    	cout<<"File Open Error"<<endl;
    	return 0;
	}
	while(!namefile.eof())
	{
		namefile.getline(input,81);    //
		cout<<input<<endl;
	}
	namefile.close();
}
