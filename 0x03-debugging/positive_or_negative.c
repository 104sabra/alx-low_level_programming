#include "main.h"

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%i negative\n", i);
	else if (i > 0)
		printf("%i positive\n", i);
	else
		printf("%i is zero\n", i);
}
