#include <iostream>

using namespace std;

/*
	auto
*/

auto add(int x, int y) -> int; // �Լ������� ��� ����, �ٸ� �Ű������� ��� �Ұ���
// -> � Ÿ������ ������ ����صα⵵ ��


int main()
{
	int a = 10;
	float b = 3.14f;

	auto result = a + b; // Ÿ������ �߷�

	return 0;
}

auto add(int x, int y) -> int
{
	return x + y;
}
