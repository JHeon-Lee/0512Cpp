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
	cout << str.length() << endl << endl; // 공백을 제외한 길이

	string a("Hello, ");
	string b("C++");

	string c = a + b; // 연산 가능 (빼기는 불가)
	cout << c << endl;

	c = "abc";
	cout << c << endl;

	c += "def";
	cout << c << endl;

	cout << c[3] << endl; // 배열처럼 사용도 가능

	return 0;
}