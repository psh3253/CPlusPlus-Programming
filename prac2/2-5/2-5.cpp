#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str[100];
	int i = 0, count = 0;
	cout << "���ڵ��� �Է��϶�(100�� �̸�)." << endl;
	cin.getline(str, 100, '\n');
	while (str[i] != '\0')
	{
		if (str[i] == 'x')
			count++;
		i++;
	}
	cout << "x�� ������ " << count << endl;

}