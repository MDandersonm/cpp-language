//����5
#include  <iostream>
using  namespace  std;

int main05()
{
    int  a = 10, b = 20;
    int& aRef = a; // a�� �����ϴ� ���� ���� aRef�� ���� - aRef ���� �����ϸ� a�� ���� �����
    cout << "a�� �� : " << a << endl;  //a�� ���� ���� �����Ѵ�� 10��
    cout << "aRef�� �����ϴ� �� : " << aRef << endl << endl;  //aRef�� a�� �����ϹǷ� 10�� ��µ�
    aRef = 100;// �������� ���� 100���� �����ϸ�  a�� ���� 100���� ����ȴ�.
    cout << "a�� �� : " << a << endl; // a�� 100�� ��µ�
    aRef = b;  // �ٽ� ���������� ���� b�ǰ��� 20���� ����
    cout << "a�� �� : " << a << endl;// a�� 20���� ����Ǿ� ��µ�
    return 0;
}
