#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file;
	file.open("example.txt",ios::out|ios::in);
	return 0;
}
