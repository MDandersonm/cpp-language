//과제1번

#include	<iostream>

//cout와  endl은 std라는 이름공간안에 정의되어있는 표준입출력스트림의 일부다.
using namespace std;  //전체 표준 라이브러리의 멤버들을 이름공간 없이 사용하고 싶다면 using namespace를 이용하여 선언해준다.


int main001()
{
    cout << "나의 첫 번째 C++ 프로그램" << endl; // std::를 생략하고 C++ 표준 라이브러리의 모든 요소(cout, endl, cin, vector 등) 사용 가능
    return 0;
}