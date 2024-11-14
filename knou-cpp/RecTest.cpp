//과제5
#include  <iostream>
using  namespace  std;

int main05()
{
    int  a = 10, b = 20;
    int& aRef = a; // a를 참조하는 참조 변수 aRef를 선언 - aRef 값을 변경하면 a의 값이 변경됨
    cout << "a의 값 : " << a << endl;  //a의 값은 위에 정의한대로 10임
    cout << "aRef가 참조하는 값 : " << aRef << endl << endl;  //aRef는 a를 참조하므로 10이 출력됨
    aRef = 100;// 참조변수 값을 100으로 변경하면  a의 값도 100으로 변경된다.
    cout << "a의 값 : " << a << endl; // a도 100이 출력됨
    aRef = b;  // 다시 참조변수의 값을 b의값인 20으로 변경
    cout << "a의 값 : " << a << endl;// a도 20으로 변경되어 출력됨
    return 0;
}
