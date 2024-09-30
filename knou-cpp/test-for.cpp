#include <iostream>

using namespace std;
int main() {
	
	int arr[] = { 1,2,3,4,5 };
	int sum{ 0 };
	for(int& a : arr) {
		cin >> a;
		sum += a;
		

	}

	cout << "합계:" << sum << endl;
	/*
	범위 기반 for 루프에서 a가 배열의 복사본이라는 점입니다. 범위 기반 for 루프에서 a는 배열 arr의 요소를 복사한 값이므로, 배열 arr의 원소가 직접 수정되지 않습니다.
	*/
	


	return 0;
}