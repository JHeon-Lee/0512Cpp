#include <iostream>

using namespace std;

/*
int main()
{
	//int* ptr = (int*)malloc(5 * sizeof(int));
	//if(ptr != NULL)
	//	free(ptr);
	//ptr = NULL; --> c ��Ÿ��

	int* ptr1 = new int;
	delete ptr1;

	int* ptr2 = new int(7);
	delete ptr2;

	int* ptr3 = new int{ 7 };
	delete ptr3;

	int* ptr4 = new(std::nothrow) int{ 7 }; // �Ҵ� ���н� NULL ����

	if (ptr4 == nullptr)
		cout << "Error!";

	if (ptr4 != nullptr)
		delete ptr4;

	int* arr = new int[10]{ 1,2,3,4,5,6 }; // �迭��
	delete[] arr; // delete �� []�� ����


	// 2���� ������ �޴¹�
	int** ptr_arr = new int* [5];
	ptr_arr[0] = new int[10];
	ptr_arr[1] = new int[10];
	ptr_arr[2] = new int[10];
	ptr_arr[3] = new int[10];
	ptr_arr[4] = new int[10];

	for (int i = 0; i < 5; i++)
	{
		delete[] ptr_arr[i];
	}
	delete[] ptr_arr;
	
	return 0;
}
*/

struct Test
{
	int a;
	int b;
	string str;

	void printNum()
	{
		cout << "Hello";
	}
};

int main()
{
	Test* test = new Test;

	test->a = 10;
	test->b = 20;
	test->str = "hello!";
	test->printNum();

	delete test;

	// Test test = (Test*)malloc(10 * sizeof(Test)); --> ���� ���ڿ��� �Լ��� �����鼭 ����
	// new �� malloc�� ������

	return 0;
}