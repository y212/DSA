#include <bits/stdc++.h>
using namespace std;

void fun(vector <int> arr,int n,vector <int> v,int i,int k,int s)
{
    if(i >= n){
     //   cout << s << " " << k << endl;
        if(s == k){
             for(int x:v) cout << x << " ";
             cout << endl;
        }
        return;
    }
    
    v.push_back(arr[i]);
    s+=arr[i];
    
    fun(arr,n,v,i+1,k,s);
    
    v.pop_back();
    s-=arr[i];
    
    fun(arr,n,v,i+1,k,s);
}

int main()
{
    vector <int> arr{1,2,1},v;
    int k = 3;
    fun(arr,arr.size(),v,0,k,0);

    return 0;
}
