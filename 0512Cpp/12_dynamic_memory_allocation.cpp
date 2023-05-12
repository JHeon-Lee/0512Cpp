#include <iostream>

using namespace std;

/*
int main()
{
	//int* ptr = (int*)malloc(5 * sizeof(int));
	//if(ptr != NULL)
	//	free(ptr);
	//ptr = NULL; --> c 스타일

	int* ptr1 = new int;
	delete ptr1;

	int* ptr2 = new int(7);
	delete ptr2;

	int* ptr3 = new int{ 7 };
	delete ptr3;

	int* ptr4 = new(std::nothrow) int{ 7 }; // 할당 실패시 NULL 리턴

	if (ptr4 == nullptr)
		cout << "Error!";

	if (ptr4 != nullptr)
		delete ptr4;

	int* arr = new int[10]{ 1,2,3,4,5,6 }; // 배열형
	delete[] arr; // delete 에 []가 붙음


	// 2차원 포인터 받는법
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

	// Test test = (Test*)malloc(10 * sizeof(Test)); --> 터짐 문자열과 함수를 만나면서 터짐
	// new 와 malloc의 차이점

	return 0;
}