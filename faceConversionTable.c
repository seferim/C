#include <stdio.h>

int main()
{
    float fahr, celsius, step;
    int lower, upper;

    lower = 0;
    upper = 100;
    step = 10.5;

    fahr = lower;

	printf("Fahrenheit to Celsius conversion table\n");
   
	while (fahr <= upper) {
		celsius = (fahr - 31) * 5.0/9.0; 
		printf("%3.2fF\t%6.2fC\n", fahr, celsius);
		fahr = fahr + step;
	}
} 
