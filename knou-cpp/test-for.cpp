#include <iostream>

using namespace std;
int main() {
	
	int arr[] = { 1,2,3,4,5 };
	int sum{ 0 };
	for(int& a : arr) {
		cin >> a;
		sum += a;
		

	}

	cout << "�հ�:" << sum << endl;
	/*
	���� ��� for �������� a�� �迭�� ���纻�̶�� ���Դϴ�. ���� ��� for �������� a�� �迭 arr�� ��Ҹ� ������ ���̹Ƿ�, �迭 arr�� ���Ұ� ���� �������� �ʽ��ϴ�.
	*/
	


	return 0;
}