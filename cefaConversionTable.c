#include <stdio.h>

int main()
{
	float fahr, celsius, step;
	int lower, upper;

	lower = 0;
	upper = 100;
	step = 15.5;

	printf("Celsius to Fahrenheit conversion table\n");

	celsius = lower;

	while (celsius <= upper) {
		fahr = celsius * (9.0/5.0) + 32;
		printf("%3.2fC\t%6.2fF\n", celsius, fahr);
		celsius += step;
	}
}
