import java.util.Scanner;

public class Main
{
    public static void printArr(int arr[],int n)
    {
        for(int i=0;i<n;i++)
        System.out.print(arr[i] + " ");
        System.out.println();
    }
    
    public static void SelectionSort(int arr[],int n)
    {
        for(int i=0;i<n-1;i++)
        {
            int min = i;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j] < arr[min])
                min = j;
            }
            
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
            
            printArr(arr,n);
            try{
                 Thread.sleep(5000);
            }
            catch(InterruptedException e){
                
            }
           
            
        }
    }
    
	public static void main(String[] args) 
	{
		Scanner scan  = new Scanner(System.in);
		int n = scan.nextInt();
		
		int arr[] = new int[n];
		for(int i=0;i<n;i++)
		arr[i] = scan.nextInt();
		
		SelectionSort(arr,n);
	}
}
