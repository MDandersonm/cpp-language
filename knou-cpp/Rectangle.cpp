//과제 8


/*

#include	<iostream>
using namespace std;
const float PI = 3.14159265f;

//Circle구조체는 원을 의미
struct Circle {
	float  radius, cx, cy;
};

//Rectangle 구조체는 직사각형을 의미
struct Rectangle {
	float  x1, y1;	// 좌측 하단의 꼭짓점 좌표
	float  x2, y2;	// 우측 상단의 꼭짓점 좌표
};

// 원의 데이터 입력 (Circle용)
void inputData(Circle& c)
{
    cout << "원의 반지름 : ";
    cin >> c.radius;
    cout << "중심좌표(x) : ";
    cin >> c.cx;
    cout << "중심좌표(y) : ";
    cin >> c.cy;
}
//다중정의는 같은 이름의 함수를 여러 번 정의할 수 있는 기능이다
//이때 함수의 매개변수의 타입이나 개수가 달라야함
//다중정의된 함수들은 호출될 때, 매개변수의 타입과 개수에 따라 적절한 함수가 선택되어 실행된다.

//예를들어 inputData 함수명이 같은 2개의 함수가있지만 직사각형 구조체가 매개변수로 들어오면 아래의 해당 함수가 작동합니다. 

// 직사각형의 데이터 입력 (Rectangle용)
void inputData(Rectangle& r)
{
    cout << "좌측 하단의 x 좌표 : ";
    cin >> r.x1;
    cout << "좌측 하단의 y 좌표 : ";
    cin >> r.y1;
    cout << "우측 상단의 x 좌표 : ";
    cin >> r.x2;
    cout << "우측 상단의 y 좌표 : ";
    cin >> r.y2;
}

// 원의 데이터 출력 (Circle용)
void prData(const Circle& c)
{
    cout << "반지름 = " << c.radius << endl;
    cout << "중심좌표 = (" << c.cx << ", " << c.cy << ")" << endl;
}

// 직사각형의 데이터 출력 (Rectangle용)
void prData(const Rectangle& r)
{
    cout << "좌측 하단의 좌표 = (" << r.x1 << ", " << r.y1 << ")" << endl;
    cout << "우측 상단의 좌표 = (" << r.x2 << ", " << r.y2 << ")" << endl;
}

// 원의 면적 계산 (Circle용)
float area(const Circle& c)
{
    return PI * c.radius * c.radius;
}

// 직사각형의 면적 계산 (Rectangle용)
float area(const Rectangle& r)
{
    float width = r.x2 - r.x1;
    float height = r.y2 - r.y1;
    return width * height;
}


int main()
{
    Circle circle = { 1, 2, 3 };
    Rectangle rect = { 0, 0, 4, 5 };

    // 원의 데이터 입력 및 출력
    //inputData(circle);
    //cout << "입력된 원의 정보" << endl;
    //prData(circle);
    //cout << "원의 면적 = " << area(circle) << endl;

    // 직사각형의 데이터 입력 및 출력
    inputData(rect);
    cout << "입력된 직사각형의 정보" << endl;
    prData(rect);
    cout << "직사각형의 면적 = " << area(rect) << endl;

    return 0;
}
*/