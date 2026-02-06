import java.util.Scanner;

public class DS_30_ja_options
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		int choice;
		int count = 0;
		
		int[][] array = null;
		
		do
		{
			System.out.print("Please enter: \n0 to Exit\n1 to Create jagged array\n2 to Display jagged array\n3 to Find the sum of each row\n4 to Find the largest element in each row: ");
			
			choice = scanner.nextInt();
			
			switch(choice)
			{
				case 0:
				{
					System.out.print("Terminating PRogram.\n");
					break;
				}
				
				case 1:
				{
					count++;
					
					System.out.print("Please enter number of rows: ");
		
					int rows = scanner.nextInt();
					
					array = new int[rows][];
					
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
					
					break;
				}
				
				case 2:
				{
					if(count == 0)
					{
						System.out.print("Please create a jagged array first.\n");
						break;
					}
					
					for(int i = 0; i < array.length; i++)
					{
						for(int j = 0; j < array[i].length; j++)
						{
							System.out.print(array[i][j]+" ");
						}
						
						System.out.print("\n");
					}
					
					break;
				}
				
				case 3:
				{
					if(count == 0)
					{
						System.out.print("Please create a jagged array first.\n");
						break;
					}
				
					for(int i = 0; i < array.length; i++)
					{
						int sum = 0;
						
						for(int j = 0; j < array[i].length; j++)
						{
							sum = sum + array[i][j];
						}
						
						System.out.print("The sum of row "+i+" is: "+sum+".\n");
					}
					
					break;
				}
				
				case 4:
				{
					if(count == 0)
					{
						System.out.print("Please create a jagged array first.\n");
						break;
					}
				
					for(int i = 0; i < array.length; i++)
					{
						int max = array[i][0];
						
						for(int j = 0; j < array[i].length; j++)
						{
							if(array[i][j] > max)
							{
								max = array[i][j];
							}
						}
						
						System.out.print("The max number from row "+i+" is: "+max+".\n");
					}
					
					break;
				}
				
				default:
				{
					System.out.print("Please enter a valid choice.\n");
					break;
				}
			}
		}while(choice != 0);
	}
}
