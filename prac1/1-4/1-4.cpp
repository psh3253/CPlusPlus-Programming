#include <iostream>

int main()
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
	return 0;
}