#include <stdio.h>

int main()
{
	float celsius, step;
	
	step = 15.5;

	printf("Celsius to Fahrenheit conversion table\n");

	for (celsius = 0; celsius <= 100; celsius += step)
	printf("%3.2fC\t%6.2fF\n", celsius, (9.0/5.0) * celsius + 32);
}
