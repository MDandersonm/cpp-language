//����2

#include	<iostream>
using namespace std;

int main002()
{
    int data[10] = { 10, 23, 5, 9, 22, 48, 12, 10, 55, 31 };
    int max=data[0];  // data�� ù ��° �����͸� max�� ������  -   data�� 0 index�� ���� �ִ밪�̶�� �ϴ� ���� �����Ѵ�.

    cout << "������ : " << data[0] ;  // 0�� ������ ��� -  data�迭���� 0 index���� ����Ѵ�
    for (int i = 1; i < 10; i++ ) {    // ������ 9���� ������ ��  - 0�� index�� �ִ밪�� �־����ϱ� 1�� index������ 9�� index�� ���� ���ʴ�� ���غ���
        cout << "  " << data[i] ;     // i�� ������ ��� - ���� ��� index���� ����Ѵ�.
        if (max <data[i])    // i�� �����Ͱ� max���� ũ�� ��     
            max = data[i];     // max�� i�� �����ͷ� �ٲ�
    }
    //�� 0�� �ε����� max������ ��� for���� ���鼭 �迭�� ���� �ϳ��ϳ� ���ذ��鼭 max������ ũ�� �� ���� max������ �����Ͽ� �迭�� ���� ū���� max������ �����ȴ�.
    cout << endl << endl;
    cout << "�迭�� �ִ� : " << max << endl;
    return 0;
}