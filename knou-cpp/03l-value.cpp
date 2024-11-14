#include	<iostream>


using namespace std;
int main03() {

	int a = 10, b = 20;
	int& aRef = a;
	cout << "a:"<<a << endl;
	cout << aRef << endl;
	aRef = 100;
	cout << "a:" << a << endl;
	aRef = b;
	cout << "a:" << a << endl;


	int c = 10, d = 20;
	int* cPtr = &c;
	cout << "*cPtr:"<<  * cPtr << endl;
	*cPtr = 100;
	cout << "c:" << c << endl;
	*cPtr = b;
	cout << "c:" << c << endl;


	return 0;
}