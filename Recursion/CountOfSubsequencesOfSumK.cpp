#include <bits/stdc++.h>
using namespace std;

int fun(vector <int> arr,int n,vector <int> v,int i,int k,int s)
{
    if(i >= n){
     //   cout << s << " " << k << endl;
        if(s == k){
             for(int x:v) cout << x << " ";
             cout << endl;
             return 1;
        }
        return 0;
    }
    
    v.push_back(arr[i]);
    s+=arr[i];
    
    int l = fun(arr,n,v,i+1,k,s);
    
    v.pop_back();
    s-=arr[i];
    
    int r = fun(arr,n,v,i+1,k,s);
    
    return l+r;
}

int main()
{
    vector <int> arr{1,2,1},v;
    int k = 3;
    cout << fun(arr,arr.size(),v,0,k,0);

    return 0;
}
