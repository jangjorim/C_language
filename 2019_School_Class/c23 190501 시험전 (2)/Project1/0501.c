#include <stdio.h>
int main()
{
	int i = 0;

	while (1)
	{
		i++;
		if (i == 10)
			break;
		if (i % 2 == 0)
			continue;
		printf("%2d", i);
	}
}