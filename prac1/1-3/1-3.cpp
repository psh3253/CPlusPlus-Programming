#include <iostream>

int main()
{
	int i, sum = 0;
	for (i = 1; i < 11; i++)
	{
		sum += i;
	}
	std::cout << "1에서 10까지 더한 결과는 " << sum << "입니다 \n";
	return 0;
}