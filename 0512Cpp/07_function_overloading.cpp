#include <iostream>

using namespace std;

// overload : c++ �� ������ �� �ϳ�, �ٸ� �Ű������� ���� ���� �̸��� ���� �Լ��� ���� �� �ִ� ���

int add(int a, int b) { return a + b; }
float add(float a, float b) { return a + b; }
int add(int a) { return a + 1; }
int add(int a, int b, int c) { return a + b + c; } // ��� ���� : �Ű�����, ���ڼ��� �ٸ��� overloading ����
// void add(int a, int b) { return; } -> ���� : ��ȯ������ ���� �Ұ� 

// using integer = int;
// int add(integer a, integer b) { return a + b; } -> �Ұ���

void output(int value) {}
void output(unsigned int value) {}
void output(float value) {}

int main()
{
	// output(1); --> ��ȣ�� �߻�
	output(10.0f);
	output('c'); // char, unsigned char, short, int -- ������ ����ȯ�ϸ鼭 ���� ����� ������ ġȯ�Ǽ� ��

	return 0;
}