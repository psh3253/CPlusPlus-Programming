#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;
	cout << "�� ���� �Է��϶�>>";
	cin >> num1 >> num2;
	if (num1 > num2)
		num3 = num1;
	else
		num3 = num2;
	cout << "ū �� = " << num3 << endl;
}