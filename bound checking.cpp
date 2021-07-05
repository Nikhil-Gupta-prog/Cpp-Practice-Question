// there is no index out of bound checking in c/c++
//for example the following program compile fine but may produce unexpected output when run.
//this c program compile fine as index out of bound is not checked in cpp. 
#include<iostream>
using namespace std;
int main()
{
	int arr[2]={1,2};
	cout<<arr[3]<<endl;
	cout<<arr[-2];
	
	return 0;
}
