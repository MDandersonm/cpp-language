//과제4
#include	<iostream>
using namespace std;

int main004()
{
    int* intPtr;  //int형 포인터 선언
    intPtr = new int[4];  // 4개의 int 값을 저장할 메모리 할당   -동적메모리할당을 위해 new연산자 사용
    *intPtr = 10;  // 배열포인터는 배열의 첫메모리를 가리키게 되는데 intPtr이 가리키는 첫번째 메모리 위치에 10을 저장한다.
    *(intPtr + 1) = 20; // 포인터위치가 1증가하였으므로 다음 메모리인 두번째 메모리위치에 값을 20을 저장
    intPtr[2] = 30;  // 3번째 메모리 위치에 30저장
    intPtr[3] = 40;  //4번째 메모리 위치에 40을 저장함
    for (int* p = intPtr, i = 0; i < 4; i++)// i는 0부터 3까지 4번 반복하면서 포인터 p를 한칸씩 이동하면서 그 메모리에 있는 값을 출력한다.
        cout << *p++  << " ";  // p가 가리키는 곳의 값을 출력한 후 p를 다음으로 이동
    cout << endl;

    delete[] (intPtr);  // ㈀에서 할당한 메모리 반환 -  배열포인터이기때문에 delete[]를 사용
        return 0;
}