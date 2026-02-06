import java.util.Scanner;

public class DS_30_switchcase
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("Enter the number: ");
		
		int num = scanner.nextInt();
		int choice;
		
		do
		{
			System.out.print("Enter:\n0 to exit\n1 to check whether odd or even\n2 to print multiplication table\n3 to check whether number is prime\n4 check whether number is perfect: ");
			
			choice = scanner.nextInt();
			
			switch(choice)
			{
				case 0:
				{
					System.out.print("Terminating Program.\n");
					break;
				}
				
				case 1:
				{
					if(num%2 == 0)
					{
						System.out.print("The number is even.\n");
					}
					else
					{
						System.out.print("The number is odd.\n");
					}
					
					break;
				}
				
				case 2:
				{
					System.out.print("The Multiplication table is: \n");
					
					for(int i = 1; i <= 10; i++)
					{
						System.out.print(num+" x "+i+" = "+num*i+"\n");
					}
					
					break;
				}
				
				case 3:
				{
					int count = 0;
					
					for(int i = 2; i < num/2; i++)
					{
						if((num % i) == 0)
						{
							count++;
							break;
						}
					}
					
					if(count != 0)
					{
						System.out.print("The number is not prime.\n");
					}
					else
					{
						System.out.print("The number is prime.\n");
					}
					
					break;
				}
				
				case 4:
				{
					int sum = 0;
					
					for(int i = 1; i <= num/2; i++)
					{
						if(num%i == 0)
						{
							sum = sum + i;
						}
					}
					
					if(num == sum)
					{
						System.out.print("The number is a perfect number.\n");
					}
					else
					{
						System.out.print("The number is not perfect.\n");
					}
					
					break;
				}
				
				default:
				{
					System.out.print("Invalid chhoice.\n");
				}
			}
		}while(choice != 0);
	}
}
