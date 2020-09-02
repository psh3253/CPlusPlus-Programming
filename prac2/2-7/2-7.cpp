#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str[11];
	while (true)
	{
		cout << "종료하고싶으면 yes를 입력하세요>>";
		cin.getline(str, 10, '\n');
		if (strcmp(str, "yes") == 0)
			break;
	}
	cout << "종료합니다..." << endl;
}