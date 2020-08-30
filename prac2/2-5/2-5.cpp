#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str[100];
	int i = 0, count = 0;
	cout << "문자들을 입력하라(100개 미만)." << endl;
	cin.getline(str, 100, '\n');
	while (str[i] != '\0')
	{
		if (str[i] == 'x')
			count++;
		i++;
	}
	cout << "x의 개수는 " << count << endl;

}