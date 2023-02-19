import java.util.Scanner;

public class Main
{
    static void merge(int arr[],int n,int l,int mid,int r)
    {
        int i = l;
        int j = mid+1;
        int k = l;
        int b[] = new int[n];
        
        while(i<=mid && j<=r)
        {
            if(arr[i] <= arr[j])
            {b[k] = arr[i]; i++;}
            else{
                b[k] = arr[j]; j++;
            }
            
            k++;
        }
        
         while(i<=mid)
            {
                b[k] = arr[i]; i++; k++;
            }
            
            while(j<=r)
            {
                b[k] = arr[j]; j++; k++;
            }
            
            for(k=l;k<=r;k++)
            arr[k] = b[k];
    }
    
    static void mergeSort(int arr[],int n,int l,int r)
    {
        if(l < r)
        {
            int mid = (l+r)/2;
            mergeSort(arr,n,l,mid);
            mergeSort(arr,n,mid+1,r);
            merge(arr,n,l,mid,r);
        }
    }
    
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int arr[] = new int[n];
		
		for(int i=0;i<n;i++)
		arr[i] = scan.nextInt();
		
		mergeSort(arr,n,0,n-1);
		
		for(int i=0;i<n;i++)
		System.out.print(arr[i] + " ");
	}
}
