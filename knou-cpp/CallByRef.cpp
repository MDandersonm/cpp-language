//����7

#include	<iostream>
using namespace std;

const float PI = 3.14159265f;
//����ü ����
struct Circle {
	float  radius, cx, cy;  //����ü �������
};

// ���� ������ �Է�
//Circle& c�� �Ű������� �޾� ���� �����͸� ����ڷκ��� �Է¹޴´�. ������ ���޵Ǳ� ������, ����� ���� �̿��ϴ� ���� �ƴ� main �Լ����� ���޵� circle ��ü�� ���� �����˴ϴ�.
void inputData( Circle& c)  // �Լ� �Ӹ���
{
	cout << "���� ������ : ";
	cin >> c.radius;  //circle��ü c�� ������ ����
	cout << "�߽���ǥ(x) : ";
	cin >> c.cx;   //circle��ü c�� x�� ����
	cout << "�߽���ǥ(y) : ";
	cin >> c.cy;   //circle��ü c�� y�� ����
}

// ���� ������ ���
//const�� ����Ͽ� �����͸� �������� ������ ���Ѵ�(��ü ������ ����)
//Circle c �� �Ͽ� �������� �����Ѵٸ� �Լ� ȣ��� ����ü�� ���纻�� �����Ǿ� �ð�,�޸������� ��ȿ�����̴�. 
//Circle& c�� ����Ͽ� ����ȣ���� �̿��ϸ� ��ü�� ���������ʰ� �ش� ��ü�� �ּҸ� �����Ͽ� �������
void prData(const Circle& c)  // �Լ� �Ӹ���
{
	cout << "������ = " << c.radius << endl;
	cout << "�߽���ǥ = (" << c.cx;
	cout << ", " << c.cy << ")" << endl;
}

float area( const Circle& c)
{
	return PI * c.radius * c.radius;
}

int main007()
{
	Circle circle = { 1, 2, 3 }; //����ü ���� circle �� �����ϰ� ���ÿ� �ʱ�ȭ�Ͽ� �������� 1, x��2 ,y��3���� �Է�
	inputData(circle);	//�����͸� �Է¹޾Ƽ� ��ü�� ������������� ������.(���������̿�)
	cout << "�Էµ� ���� ����" << endl;
	prData(circle);// �ٲ� ���� ��½�Ŵ
	cout << "���� ���� = " << area(circle) << endl;  // ���� ���� ����
	return 0;
}



