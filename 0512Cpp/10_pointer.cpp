#include <iostream>

using namespace std;

int main()
{
	int* ptr = nullptr; // c 에선 = NULL로 했지만
	int* ptr2(nullptr);
	int* ptr3{ nullptr };

	std::nullptr_t nptr; // 자동으로 nullptr이 됨

	return 0;
}