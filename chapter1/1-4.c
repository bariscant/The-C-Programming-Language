#include <stdio.h>
/* print Celcius-Fahrenheit table for fahr = 0, 20, ..., 300; floating-point version */
int main(void) {
	
	float fahr, celsius;
	float lower, upper, step;
	lower = 0;		/* lower limit of temperatuire scale */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */

	celsius = lower;
	printf("Celcius\tFahrenheit\n");
	while (fahr <= upper) {
		fahr = (9.0/5.0) * celsius + 32;
		printf("%6.1f\t\t%3.0f\n", celsius, fahr); 
		celsius = celsius + step;
	} }