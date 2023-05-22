#include <iostream>
#include <random>

using namespace std;

// C���� ���� ������ ���� ���α׷��� ���� �ð��� �����ϸ� ���� ���� ������,
// �õ尪�� �ʹ� õõ�� ���ϰ�, ������ �յ��ϰ� ������ ����

int main()
{
	random_device rd; // �õ尪 - ��ǻ�Ͱ� �����ϸ鼭 ����ġ�� ������ ��ҵ��� ������� �� ����

	mt19937_64 mersenne(rd()); // ���� ���� ����

	uniform_int_distribution<> randNum(1, 10); // 1 ~ 10 ���� �յ� ����

	for (int i = 0; i < 10; i++)
		cout << randNum(mersenne) << ", ";

	return 0;
}