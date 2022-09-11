#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector <int> arr(n);
    
    for(int i=0;i<n;i++) cin >> arr[i];
    
    // Aproach 1 using vector reverse function 
    
    // reverse(arr.begin(),arr.end());
    
    // ---------------
 
    // Approach 2 by swapping
    
    // int i=0,j=n-1;
    // while(i < j)
    // {
    //     swap(arr[i++],arr[j--]);
    // }
    
    // ---------- 
    
    for(int i=0;i<n;i++)  
    cout << arr[i] << " ";
    return 0;
}
