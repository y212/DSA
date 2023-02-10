import java.util.*;
import java.lang.Math;

public class Main
{
    
    public static int countDigits(int n)
    {
        int digit = 0;
       while(n != 0)
       {
           digit++; n/=10;
       }
       
       return digit;
    }
    
    public static boolean isArmstrong(int n,int digit)
    {
        int k = n,sum = 0;
        
        while(n != 0)
        {
           sum += Math.pow((n%10),digit); n/=10; 
        }
        
        if(sum == k)
         return true;
        else
         return false;
    }
    
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
	    int digits = countDigits(n);
	    System.out.println(isArmstrong(n,digits));
	}
}
