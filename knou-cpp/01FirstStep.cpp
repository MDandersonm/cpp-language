#include <iostream>

int main() {
	/*주석방법1*/
	//주석방법2


	std::cout << "헬로" <<"a" 
		<<"입니다"
		<< std::endl;

	//표준 입력스트림
	int a;
	char str[100];
	std::cin >> a >> str; //연속해서 입력하기

	std::cout << a<<str << std::endl;

	return 0;
}