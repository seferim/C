#include <stdio.h>

int main()
{
    float fahr, step;
    
	step = 10.5;

	printf("Fahrenheit to Celsius conversion table\n");

	for (fahr = 0; fahr <= 100; fahr += step)
	printf("%3.2fF\t%6.2fC\n", fahr, (5.0/9.0) * (fahr - 32.0));
   
} 
