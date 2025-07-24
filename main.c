// main.c

#include <stdio.h>

#include "add.h"
#include "sub.h"
#include "mul.h"
#include "div.h"

int main()
{
	float a, b, s, d, p, q;
	
	printf("Please enter the two numbers that are to be added: ");
	scanf("%f %f", &a, &b);
	
	s = addition(a, b);
	d = subtraction(a, b);
	p = multiplication(a, b);
	q = division(a, b);
	
	printf("The sum of %.2f and %.2f is %.2f.\n", a, b, s);
	printf("The difference between %.2f and %.2f is %.2f.\n", a, b, d);
	printf("The product of %.2f and %.2f is %.2f.\n", a, b, p);
	printf("The quotient of %.2f divided by %.2f is %.2f.\n", a, b, q);
}
