#include <iostream>

namespace NameSpace1 { int a = 10; }
namespace NameSpace2 { int a = 20; }
int a = 30;
namespace NameSpace1 { int b = 50; }

int main02() {
	int a = 40;
	std::cout << NameSpace1::a << std::endl;
	std::cout << NameSpace2::a << std::endl;
	std::cout << ::a << std::endl; //전역변수
	std::cout << a << std::endl; // 지역변수출력
	std::cout << NameSpace1::b << std::endl;
	return 0;
}