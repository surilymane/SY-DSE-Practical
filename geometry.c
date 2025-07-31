#include <stdio.h>
#include <math.h>

int main()
{
	char loop1, loop2;
	char shape;
	
	do
	{
		printf("Please choose the shape 's' for square, 'r' for rectangle, 't' for triangle and 'c' for circle: ");
		scanf(" %c", &shape);
		
		switch(shape)
		{
			case 's':
			{
				float side;
				char property;
				
				do
				{
					printf("Please enter the side of the square: ");
					scanf("%f", &side);
					
					printf("Please enter 'a' for area, 'p' for perimeter: ");
					scanf(" %c", &property);
					
					switch(property)
					{
						case 'a':
						{
							printf("The area of the square is %.2f.\n", side*side);
							
							break;
						}
						
						case 'p':
						{
							printf("The perimeter of the square is %.2f.\n", side*4);
							
							break;
						}
						
						default:
						{
							printf("Invalid input.\n");
							
							break;
						}
					}
					
					printf("Enter 's' to view other shapes or 'c' to view other properties: ");
					scanf(" %c", &loop2);
				}
				while((loop2 != 's') && (loop2 != 'S'));
				
				break;
			}
			
			case 'r':
			{
				float length, breadth;
				char property;
				
				do
				{
					printf("Please enter the length and breadth of the rectangle: ");
					scanf("%f %f", &length, &breadth);
					
					printf("Please enter 'a' for area, 'p' for perimeter: ");
					scanf(" %c", &property);
					
					switch(property)
					{
						case 'a':
						{
							printf("The area of the rectangle is %.2f.\n", length*breadth);
							
							break;
						}
						
						case 'p':
						{
							printf("The perimeter of the rectangle is %.2f.\n", 2*(length+breadth));
							
							break;
						}
						
						default:
						{
							printf("Invalid input.\n");
							
							break;
						}
					}
					
					printf("Enter 's' to view other shapes or 'c' to view other properties: ");
					scanf(" %c", &loop2);
				}
				while((loop2 != 's') && (loop2 != 'S'));
				
				break;
			}
			
			case 't':
			{
				float base, side2, side3, height;
				char property;
				
				do
				{
					printf("Please enter the base, two sides and height of the triangle: ");
					scanf("%f %f %f %f", &base, &side2, &side3, &height);
					
					printf("Please enter 'a' for area, 'p' for perimeter: ");
					scanf(" %c", &property);
					
					switch(property)
					{
						case 'a':
						{
							printf("The area of the triangle is %.2f.\n", (0.5*base*height));
							
							break;
						}
						
						case 'p':
						{
							printf("The perimeter of the square is %.2f.\n", base+side2+side3);
							
							break;
						}
						
						default:
						{
							printf("Invalid input.\n");
							
							break;
						}
					}
					
					printf("Enter 's' to view other shapes or 'c' to view other properties: ");
					scanf(" %c", &loop2);
				}
				while((loop2 != 's') && (loop2 != 'S'));
				
				break;
			}
			
			case 'c':
			{
				float radius;
				char property;
				
				do
				{
					printf("Please enter the radius of the circle: ");
					scanf("%f ", &radius);
					
					printf("Please enter 'a' for area, 'p' for perimeter: ");
					scanf(" %c", &property);
					
					switch(property)
					{
						case 'a':
						{
							printf("The area of the circle is %.2f.\n", M_PI*radius*radius);
							
							break;
						}
						
						case 'p':
						{
							printf("The circumference of the circle is %.2f.\n", 2*M_PI*radius);
							
							break;
						}
						
						default:
						{
							printf("Invalid input.\n");
						}
					}
					
					printf("Enter 's' to view other shapes or 'c' to view other properties: ");
					scanf(" %c", &loop2);
				}
				while((loop2 != 's') && (loop2 != 'S'));
				
				break;
			}
			
			default:
			{
				printf("Invalid shape.\n");
				
				break;
			}
		}
		
		printf("Please enter 's' to stop and 'c' to view other shapes: ");
		scanf(" %c", &loop1);
	}
	while((loop1 != 's') && (loop1 != 'S'));
}
