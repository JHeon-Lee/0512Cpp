#include <iostream>
#include <string>

using namespace std;

int main()
{
	char myStr[] = "Hello, C++";
	myStr[1] = 'A';
	const char* test = "Hello";

	string str = "Hello, C++";

	cout << str.size() << endl;
	cout << str.length() << endl << endl; // ������ ������ ����

	string a("Hello, ");
	string b("C++");

	string c = a + b; // ���� ���� (����� �Ұ�)
	cout << c << endl;

	c = "abc";
	cout << c << endl;

	c += "def";
	cout << c << endl;

	cout << c[3] << endl; // �迭ó�� ��뵵 ����

	return 0;
}