#include <iostream>

using namespace std;

void print(int x = 7) // x�� �ƹ� ���� �ȵ��� 7�� �ʱ�ȭ��
{
	cout << x << endl;
}

void print(int x, int y = 7) // ���� �ʱ�ȭ�ϰ� �ڴ� �����ϴ°� �Ұ���
{
	cout << x << endl;
	cout << y << endl;
}

void print(int x = 10, int y = 10, int z = 10)
{

}

int main()
{
	// print(); // ��ȣ�� �߻� --> 1,3��° print �Է¾��� ����
	// print(5); // ��ȣ�� �߻� --> 1,2��° print �Ѵ� �ϳ��� �Է��ص� ����
	// �ᱹ �Ű����� �ʱ�ȭ�� �������� ���� ���°� ������ �� ����

	return 0;
}