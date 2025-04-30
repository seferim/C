#include <stdio.h>

int main()
{
	int temperature;
	float celsius;

	printf("Enter temperature in Fahrenheit.\n");
	scanf("%d", &temperature);

	celsius = (5.0/9.0) * (temperature - 32.0);

	printf("%d Fahrenheit is, %.2f Celius", temperature, celsius);
}	
