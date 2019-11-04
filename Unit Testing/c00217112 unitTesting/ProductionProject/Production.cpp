#include "Production.h"



int Production::withinLimits(int a)
{
	if (a >= 1 && a <= 46)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int Production::checkArraySize(int t_array[], int size)
{
	if (sizeof(t_array) < size)
	{
		correctSize = false;
		return 1;
	}
	else
	{
		correctSize = true;
		return 0;
	}
}

int Production::duplicateCheck(int t_array[])
{
	for (int i = 0; i < sizeof(t_array); i++)
	{
		for (int j = 0; j < sizeof(t_array); i++)
		{
			if (t_array[i] == t_array[j])
			{
				if (i != j)
				{
					return 0;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	
}
