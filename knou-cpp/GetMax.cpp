//����6

#include	<iostream>
using namespace std;

//int�� �迭�� �ִ밪�� ã�� �Լ�
int getMax( int arr[], int len)  // �Լ� �Ӹ���
{
    int max = INT_MIN;    // int���� �ּڰ��� max�� ������
    for (int i = 0; i < len; i++)//�迭�� �ε����� �ϳ��� ���鼭 �迭�� ���� max�� ������ ������ ũ�� max���� �ٲ��ִ� ���
        if (max < arr[i])   max = arr[i];

    return max;   // ����� ��ȯ
}

// float�� �迭�� �ִ��� ã�� �Լ� (�Լ� ��������)
float getMax(float arr[], int len)//�Լ��� �̸��� ������ �Ű������� Ÿ���� int�� �ƴ� float���� float������ �Ű������� �Է��ϸ� �ش� �Լ��� �����Ѵ�.
{
    float max = -FLT_MAX;  // float���� �ּڰ����� �ʱ�ȭ (FLT_MAX�� <cfloat> ������� ����)
    for (int i = 0; i < len; i++)
        if (max < arr[i]) max = arr[i];  // �迭�� ���� max�� ���Ͽ� �ִ� ����
    return max;
}

int main006()
{
    int data[10] = { 10, 23, 5, 9, 22, 48, 12, 10, 55, 31 };

    cout << "������ : ";
    for (int i = 0; i < 10; i++) //data �迭�� �ִ� ������ �ϳ��� ���ʴ�� ����Ѵ�.
        cout << data[i] << "  ";
    cout << endl << endl;
    cout << "�ִ� = " << getMax(data, 10) << endl;  //data�� int�� �迭�̱⶧����  int���迭�� �ִ밪�� ã�� �Լ��� �۵��Ͽ� �迭�� �ִ밪�� ��ȯ�Ѵ�.
    return 0;
}