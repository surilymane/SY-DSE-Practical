import java.util.Scanner;

public class DS_30_jaggedarray
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("Please enter number of rows: ");
		
		int rows = scanner.nextInt();
		
		int[][] array = new int[rows][];
		
		int columns;
		
		for(int i = 0; i < rows; i++)
		{
			System.out.print("Please enter number of columns in row "+i+": ");
			
			columns = scanner.nextInt();
			
			array[i] = new int[columns];
			
			for(int j = 0; j  < columns; j++)
			{
				System.out.print("Please enter element in index ["+i+"] ["+j+"]: ");
				
				array[i][j] = scanner.nextInt();
			}
		}
		
		System.out.print("The array is: \n");
		
		for(int i = 0; i < rows; i++)
		{
			for(int j = 0; j < array[i].length; j++)
			{
				System.out.print(array[i][j]+" ");
			}
			
			System.out.print("\n");
		}
	}
}
