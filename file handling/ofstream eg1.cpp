#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream file;
	file.open("example.txt");
	file<<"Hi"<<endl;
	cout<<"create a file\n";
	file.close();
	return 0;
}
