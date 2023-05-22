#include <iostream>

using namespace std;

// overload : c++ 의 다형성 중 하나, 다른 매개변수를 가진 같은 이름의 여러 함수를 만들 수 있는 기능

int add(int a, int b) { return a + b; }
float add(float a, float b) { return a + b; }
int add(int a) { return a + 1; }
int add(int a, int b, int c) { return a + b + c; } // 모두 가능 : 매개변수, 인자수가 다르면 overloading 가능
// void add(int a, int b) { return; } -> 오류 : 반환형으로 구분 불가 

// using integer = int;
// int add(integer a, integer b) { return a + b; } -> 불가능

void output(int value) {}
void output(unsigned int value) {}
void output(float value) {}

int main()
{
	// output(1); --> 모호성 발생
	output(10.0f);
	output('c'); // char, unsigned char, short, int -- 순으로 형변환하면서 제일 비슷한 것으로 치환되서 들어감

	return 0;
}