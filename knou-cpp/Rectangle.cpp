//���� 8


/*

#include	<iostream>
using namespace std;
const float PI = 3.14159265f;

//Circle����ü�� ���� �ǹ�
struct Circle {
	float  radius, cx, cy;
};

//Rectangle ����ü�� ���簢���� �ǹ�
struct Rectangle {
	float  x1, y1;	// ���� �ϴ��� ������ ��ǥ
	float  x2, y2;	// ���� ����� ������ ��ǥ
};

// ���� ������ �Է� (Circle��)
void inputData(Circle& c)
{
    cout << "���� ������ : ";
    cin >> c.radius;
    cout << "�߽���ǥ(x) : ";
    cin >> c.cx;
    cout << "�߽���ǥ(y) : ";
    cin >> c.cy;
}
//�������Ǵ� ���� �̸��� �Լ��� ���� �� ������ �� �ִ� ����̴�
//�̶� �Լ��� �Ű������� Ÿ���̳� ������ �޶����
//�������ǵ� �Լ����� ȣ��� ��, �Ű������� Ÿ�԰� ������ ���� ������ �Լ��� ���õǾ� ����ȴ�.

//������� inputData �Լ����� ���� 2���� �Լ��������� ���簢�� ����ü�� �Ű������� ������ �Ʒ��� �ش� �Լ��� �۵��մϴ�. 

// ���簢���� ������ �Է� (Rectangle��)
void inputData(Rectangle& r)
{
    cout << "���� �ϴ��� x ��ǥ : ";
    cin >> r.x1;
    cout << "���� �ϴ��� y ��ǥ : ";
    cin >> r.y1;
    cout << "���� ����� x ��ǥ : ";
    cin >> r.x2;
    cout << "���� ����� y ��ǥ : ";
    cin >> r.y2;
}

// ���� ������ ��� (Circle��)
void prData(const Circle& c)
{
    cout << "������ = " << c.radius << endl;
    cout << "�߽���ǥ = (" << c.cx << ", " << c.cy << ")" << endl;
}

// ���簢���� ������ ��� (Rectangle��)
void prData(const Rectangle& r)
{
    cout << "���� �ϴ��� ��ǥ = (" << r.x1 << ", " << r.y1 << ")" << endl;
    cout << "���� ����� ��ǥ = (" << r.x2 << ", " << r.y2 << ")" << endl;
}

// ���� ���� ��� (Circle��)
float area(const Circle& c)
{
    return PI * c.radius * c.radius;
}

// ���簢���� ���� ��� (Rectangle��)
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

    // ���� ������ �Է� �� ���
    //inputData(circle);
    //cout << "�Էµ� ���� ����" << endl;
    //prData(circle);
    //cout << "���� ���� = " << area(circle) << endl;

    // ���簢���� ������ �Է� �� ���
    inputData(rect);
    cout << "�Էµ� ���簢���� ����" << endl;
    prData(rect);
    cout << "���簢���� ���� = " << area(rect) << endl;

    return 0;
}
*/