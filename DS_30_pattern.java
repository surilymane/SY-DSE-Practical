public class DS_30_pattern
{
          public static void main(String[] args)
          {
                    for(int k = 5; k > 0; k--)
                    {
                              for(int i = 5; i > k; i--)
                              {
                                        System.out.print(" ");
                              }
                              
                              for(int j = 0; j < k; j++)
                              {
                                        System.out.print("*");
                              }
                              
                              System.out.print("\n");
                    }
                    
                    for(int i = 2; i <= 5; i++)
                    {
                              for (int j = 5; j > i; j--)
                              {
                                        System.out.print(" ");
                              }
                              
                              for(int k = 0; k < i; k++)
                              {
                                        System.out.print("*");
                              }
                              
                              System.out.print("\n");
                    }
          }
}
