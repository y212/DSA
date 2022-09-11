#include <bits/stdc++.h>
using namespace std;

void fun(vector <int> arr,int n,vector <int> v,int i)
{
    if(i >= n){
        for(int x:v) cout << x << " ";
        cout << endl;
        return;
    }
    
    v.push_back(arr[i]);
    fun(arr,n,v,i+1);
    v.pop_back();
    fun(arr,n,v,i+1);
}

int main()
{
    vector <int> arr{3,1,2},v;
    fun(arr,arr.size(),v,0);

    return 0;
}
