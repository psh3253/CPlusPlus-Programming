#include <iostream>
using namespace std;

int main()
{
	double num1, num2, num3, num4, num5, num6;
	cout << "5개의 실수를 입력하라>>";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	num6 = num1;
	if (num2 > num6)
		num6 = num2;
	if (num3 > num6)
		num6 = num3;
	if (num4 > num6)
		num6 = num4;
	if (num5 > num6)
		num6 = num5;
	cout << "제일 큰 수 = " << num6 << endl;
}