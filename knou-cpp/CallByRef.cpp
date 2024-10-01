//과제7

#include	<iostream>
using namespace std;

const float PI = 3.14159265f;
//구조체 정의
struct Circle {
	float  radius, cx, cy;  //구조체 멤버변수
};

// 원의 데이터 입력
//Circle& c를 매개변수로 받아 원의 데이터를 사용자로부터 입력받는다. 참조로 전달되기 때문에, 복사된 값을 이용하는 것이 아닌 main 함수에서 전달된 circle 객체의 값이 수정됩니다.
void inputData( Circle& c)  // 함수 머리부
{
	cout << "원의 반지름 : ";
	cin >> c.radius;  //circle객체 c의 반지름 설정
	cout << "중심좌표(x) : ";
	cin >> c.cx;   //circle객체 c의 x값 설정
	cout << "중심좌표(y) : ";
	cin >> c.cy;   //circle객체 c의 y값 설정
}

// 원의 데이터 출력
//const를 사용하여 데이터를 수정하지 않음을 뜻한다(객체 수정을 방지)
//Circle c 로 하여 값에의한 전달한다면 함수 호출시 구조체의 복사본이 생성되어 시간,메모리적으로 비효율적이다. 
//Circle& c를 사용하여 참좋호출을 이용하면 객체를 복사하지않고 해당 객체의 주소만 전달하여 성능향상
void prData(const Circle& c)  // 함수 머리부
{
	cout << "반지름 = " << c.radius << endl;
	cout << "중심좌표 = (" << c.cx;
	cout << ", " << c.cy << ")" << endl;
}

float area( const Circle& c)
{
	return PI * c.radius * c.radius;
}

int main007()
{
	Circle circle = { 1, 2, 3 }; //구조체 변수 circle 을 선언하고 동시에 초기화하여 반지름을 1, x값2 ,y값3으로 입력
	inputData(circle);	//데이터를 입력받아서 객체의 멤버변수값들이 수정됨.(참조전달이용)
	cout << "입력된 원의 정보" << endl;
	prData(circle);// 바뀐 값을 출력시킴
	cout << "원의 면적 = " << area(circle) << endl;  // 원의 면적 구함
	return 0;
}



