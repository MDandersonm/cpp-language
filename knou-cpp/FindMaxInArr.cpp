//과제2

#include	<iostream>
using namespace std;

int main002()
{
    int data[10] = { 10, 23, 5, 9, 22, 48, 12, 10, 55, 31 };
    int max=data[0];  // data의 첫 번째 데이터를 max로 가정함  -   data의 0 index의 값을 최대값이라고 일단 보고 시작한다.

    cout << "데이터 : " << data[0] ;  // 0번 데이터 출력 -  data배열에서 0 index값을 출력한다
    for (int i = 1; i < 10; i++ ) {    // 나머지 9개의 데이터 비교  - 0번 index는 최대값에 넣었으니까 1번 index값부터 9번 index값 까지 차례대로 비교해본다
        cout << "  " << data[i] ;     // i번 데이터 출력 - 비교할 대상 index값을 출력한다.
        if (max <data[i])    // i번 데이터가 max보다 크면 비교     
            max = data[i];     // max를 i번 데이터로 바꿈
    }
    //즉 0번 인덱스를 max값으로 잡고 for문을 돌면서 배열의 값을 하나하나 비교해가면서 max값보다 크면 그 값을 max값으로 설정하여 배열중 가장 큰값이 max값으로 지정된다.
    cout << endl << endl;
    cout << "배열의 최댓값 : " << max << endl;
    return 0;
}