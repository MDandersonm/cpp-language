//과제6

#include	<iostream>
using namespace std;

//int형 배열의 최대값을 찾는 함수
int getMax( int arr[], int len)  // 함수 머리부
{
    int max = INT_MIN;    // int형의 최솟값을 max로 가정함
    for (int i = 0; i < len; i++)//배열의 인덱스를 하나씩 돌면서 배열의 값이 max로 지정된 값보다 크면 max값을 바꿔주는 방식
        if (max < arr[i])   max = arr[i];

    return max;   // 결과의 반환
}

// float형 배열의 최댓값을 찾는 함수 (함수 다중정의)
float getMax(float arr[], int len)//함수의 이름이 같으나 매개변수의 타입이 int가 아닌 float으로 float형으로 매개변수를 입력하면 해당 함수가 동작한다.
{
    float max = -FLT_MAX;  // float형의 최솟값으로 초기화 (FLT_MAX는 <cfloat> 헤더에서 제공)
    for (int i = 0; i < len; i++)
        if (max < arr[i]) max = arr[i];  // 배열의 값과 max를 비교하여 최댓값 갱신
    return max;
}

int main006()
{
    int data[10] = { 10, 23, 5, 9, 22, 48, 12, 10, 55, 31 };

    cout << "데이터 : ";
    for (int i = 0; i < 10; i++) //data 배열에 있는 값들을 하나씩 차례대로 출력한다.
        cout << data[i] << "  ";
    cout << endl << endl;
    cout << "최댓값 = " << getMax(data, 10) << endl;  //data는 int형 배열이기때문에  int형배열의 최대값을 찾는 함수가 작동하여 배열의 최대값을 반환한다.
    return 0;
}