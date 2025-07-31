#include <stdio.h>

int main()
{
	float num1, num2;
	char operator, command;
	
	do
	{
		printf("Please choose the operation from +, -, *, /: ");
		scanf(" %c", &operator);
		
		printf("Please enter the numbers: ");
		scanf("%f %f", &num1, &num2);
		
		switch(operator)
		{
			case '+':
			{
				printf("The sum of %.2f and %.2f is %.2f.\n", num1, num2, num1+num2);
				break;
			}
			
			case '-':
			{
				printf("The difference between %.2f and %.2f is %.2f.\n", num1, num2, num1-num2);
				break;
			}
			
			case '*':
			{
				printf("The product of %.2f and %.2f is %.2f.\n", num1, num2, num1*num2);
				break;
			}
			
			case '/':
			{
				printf("The quotient of %.2f and %.2f is %.2f.\n", num1, num2, num1/num2);
				break;
			}
			
			default:
			{
				printf("Invalid Operation");
				break;
			}
		}
		
		printf("Please enter 's' to stop or 'c' to continue: ");
		scanf(" %c", &command);
	}
	while((command != 'S') && (command != 's'));
}
