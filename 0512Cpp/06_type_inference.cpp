#include <iostream>

using namespace std;

/*
	auto
*/

auto add(int x, int y) -> int; // 함수형에도 사용 가능, 다만 매개변수엔 사용 불가능
// -> 어떤 타입형이 쓰일지 명시해두기도 함


int main()
{
	int a = 10;
	float b = 3.14f;

	auto result = a + b; // 타입형을 추론

	return 0;
}

auto add(int x, int y) -> int
{
	return x + y;
}
