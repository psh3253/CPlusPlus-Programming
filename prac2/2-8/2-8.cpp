#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char name[100], name1[100];
	int len = 0;
	cout << "5 ���� �̸��� ';'���� �����Ͽ� �Է��ϼ���\n>>";
	for (int i = 0; i < 5; i++)
	{
		cin.getline(name, 100, ';');
		cout << i + 1 << " : " << name << endl;
		if (strlen(name) > len)
		{
			len = strlen(name);
			strcpy(name1, name);
		}
	}
	cout << "���� �� �̸��� " << name1 << endl;
}