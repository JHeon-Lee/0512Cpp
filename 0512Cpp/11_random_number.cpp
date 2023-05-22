#include <iostream>
#include <random>

using namespace std;

// C에서 만든 난수는 같은 프로그램에 같은 시간에 실행하면 같은 값이 나오고,
// 시드값이 너무 천천히 변하고, 값들이 균등하게 나오지 않음

int main()
{
	random_device rd; // 시드값 - 컴퓨터가 실행하면서 마주치는 무작위 요소들을 기반으로 한 난수

	mt19937_64 mersenne(rd()); // 난수 생성 엔진

	uniform_int_distribution<> randNum(1, 10); // 1 ~ 10 까지 균등 분포

	for (int i = 0; i < 10; i++)
		cout << randNum(mersenne) << ", ";

	return 0;
}