#include "Production.h"


int main()
{

	const int SIZE_NEEDED = 6;
	Production p;
	int inputArray[SIZE_NEEDED];
	int inputNumber = 0;
	int count = 0;
	for (int i = 0; i < SIZE_NEEDED; i++)
	{
		std::cout << "Input a number" << std::endl;
		std::cin >> inputNumber;
		inputArray[i] = inputNumber;
		if (p.duplicateCheck(inputArray) == 0)
		{
			std::cout << "There is a duplicate here" << std::endl;
			count++;
			break;
		}
		
	}
	for (int i = 0; i < SIZE_NEEDED; i++)
	{
		int temp = inputArray[i];
		if (p.withinLimits(temp) == 0)
		{
			std::cout << "Number not within valid amount (1-46)" << std::endl;
			break;
		}
		
		
	}
	system("pause");
	return 0;
}
