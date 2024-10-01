//과제3

#include <iostream>
using namespace std;

int main003()
{
	int  a = 10, b = 100;
	int *ptr = &a; 	 // 포인터 ptr을 선언한 후에 a의 주소를 넣는다.  -  ptr은 a의 주소를 가리킨다.

	cout << "ptr이 가리키는 곳의 값 : " << *ptr << endl;    //ptr이 가리키는 a의 값은 10 이다.
	*ptr = 20;   // ptr이 가리키는 곳에 20을 저장     -  ptr이 가리키는 a의 값을 20로 바꾸게 된다.
	cout << "변수 a의 값 : " << a << endl;   // 위에서 a의 값을 바꾸어 줬으니 a는 20 이 출력됨
	ptr= &b;         // ptr이 b를 가리키게 함    -  기존 a의 주소를 가리키던 ptr 을 b의 주소를 가리키게 한다
	cout << "변수 b의 값 : " << *ptr << endl;  //ptr 이 가리키는 b의 값을 출력하게되므로 100이 출력된다.
	return 0;
}
