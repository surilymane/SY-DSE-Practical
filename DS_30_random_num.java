import java.util.Scanner;
import java.util.Random;

public class DS_30_random_num
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		Random randomNum = new Random();
		
		int random_num = randomNum.nextInt(100)+1;
		
		int guess;
		int count = 0;
		
		do
		{
			count++;
		
			System.out.print("Enter your guess between 1 and 100: ");
			guess = scanner.nextInt();
			
			while((guess < 0)||(guess > 100))
			{
				System.out.print("Enter valid guess between 1 and 100: ");
				guess = scanner.nextInt();
			}
			
			if(guess < random_num)
			{
				System.out.print("Too Low!\n");
			}
			else if(guess > random_num)
			{
				System.out.print("Too High!\n");
			}
			else
			{
				System.out.print("Congratulations! You guessed the number in "+count+" attempts!\n");
			}
		}while(guess != random_num);
	}
}
