#include <iostream>

using namespace std;

int main()
{
	int* ptr = nullptr; // c ���� = NULL�� ������
	int* ptr2(nullptr);
	int* ptr3{ nullptr };

	std::nullptr_t nptr; // �ڵ����� nullptr�� ��

	return 0;
}