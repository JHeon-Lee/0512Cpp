#include <iostream>

using namespace std;

void print(int x = 7) // x에 아무 값이 안들어가면 7로 초기화됨
{
	cout << x << endl;
}

void print(int x, int y = 7) // 앞은 초기화하고 뒤는 생략하는건 불가능
{
	cout << x << endl;
	cout << y << endl;
}

void print(int x = 10, int y = 10, int z = 10)
{

}

int main()
{
	// print(); // 모호성 발생 --> 1,3번째 print 입력없이 가능
	// print(5); // 모호성 발생 --> 1,2번째 print 둘다 하나만 입력해도 가능
	// 결국 매개변수 초기화와 다형성을 같이 쓰는건 위험할 수 있음

	return 0;
}