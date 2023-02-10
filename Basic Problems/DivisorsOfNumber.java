import java.util.*;

public class Main
{
    
    public static ArrayList<Integer> Div(int n)
    {
       ArrayList <Integer> arr = new ArrayList<Integer>();
       for(int i=1; i*i<=n; i++)
       {
           if(n%i ==0)
           {
               arr.add(i);
               if((n/i) != i)
                arr.add((n/i));
           }
       }
       
       return arr;
    }
    
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		ArrayList <Integer> arr = Div(n);
		Collections.sort(arr);
	    System.out.println(Arrays.toString(arr.toArray()));
	}
}
