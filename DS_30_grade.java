import java.util.Scanner;

public class DS_30_grade
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("Please enter the score: ");
		
		float score = scanner.nextFloat();
		
		while((score > 100)||(score < 0))
		{
			System.out.print("Please enter valid score: ");
			
			score = scanner.nextFloat();
		}
		
		if(score >= 80)
		{
			System.out.print("Your grade is: A.");
		}
		else if(score >= 65)
		{
			System.out.print("Your grade is: B.");
		}
		else if(score >= 50)
		{
			System.out.print("Your grade is: C");
		}
		else if(score >= 40)
		{
			System.out.print("Your grade is: D.");
		}
		else
		{
			System.out.print("Your grade is: F.\n");
		}
	}
}
