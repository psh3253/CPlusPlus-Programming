#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;
	cout << "두 수를 입력하라>>";
	cin >> num1 >> num2;
	if (num1 > num2)
		num3 = num1;
	else
		num3 = num2;
	cout << "큰 수 = " << num3 << endl;
}