import java.util.Scanner;

public class DS_30_pattern1
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("Enter number of rows: ");
		
		int rows = scanner.nextInt();
		
		for(int i = 1; i <= rows; i++)
		{
			for(int j = 0; j < i; j++)
			{
				System.out.print("*");
			}
			
			System.out.print("\n");
		}
	}
}
