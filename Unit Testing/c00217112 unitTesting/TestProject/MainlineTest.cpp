#include <iostream>
#include <assert.h>

#include "../ProductionProject/Production.h"

using namespace std;

int main1()
{
	Production p;

	const int SIZE_NEEDED = 6;
	Production p;
	int inputArray[SIZE_NEEDED] = {1,3,5,7,9,34};
	int count = 0;

	for (int i = 0; i < SIZE_NEEDED; i++)
	{
		assert(p.checkArraySize(inputArray, SIZE_NEEDED) == 0);
		assert(p.withinLimits(inputArray[i]) == 0);
		assert(p.duplicateCheck(inputArray) == 0);
		
	}

	system("pause");
	return 0;
}