#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str[11];
	while (true)
	{
		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		cin.getline(str, 10, '\n');
		if (strcmp(str, "yes") == 0)
			break;
	}
	cout << "�����մϴ�..." << endl;
}