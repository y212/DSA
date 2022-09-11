#include <bits/stdc++.h>
using namespace std;

int sum(int n,int i)
{
    if(i >= n)
    return i;
    
    return i + sum(n,i+1);
}

int fact(int n , int ans)
{
    if(n == 1) return ans;
    
    return fact(n-1,ans*n);
}

void revArray(int *arr,int n,int l,int r)
{
    if(l >= r)
    return;
    
    swap(arr[l],arr[r]);
    revArray(arr,n,l+1,r-1);
}

bool isPalindrome(string s,int l,int r)
{
    if(s[l] != s[r])
     return false;
    
    if(l >= r)
     return true;
    
    return isPalindrome(s,l+1,r-1);
}

void fibo(int n,int prev,int pprev,int cnt)
{
    if(n <= 1)
    {cout << n; return;}
    
    if(cnt > n) return;
    
    if(cnt == 2)
    cout << prev << " " << pprev << " ";
    else
    cout << prev + pprev << " ";
    
    fibo(n,pprev,prev+pprev,cnt+1);
}

int main()
{
    int n; cin >> n;
    
    cout << sum(n,1) << endl;
    cout << fact(n , 1) << endl;
    
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    revArray(arr,n,0,n-1);
    for(int x:arr) cout << x << " ";
    cout << endl;
    
    string s; cin >> s;
    cout << isPalindrome(s,0,s.size()-1) << endl;
    
    fibo(n,0,1,2);
    cout << endl;
    
    return 0;
}
