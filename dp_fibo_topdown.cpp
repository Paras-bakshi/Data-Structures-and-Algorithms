#include<bits/stdc++.h>
using namespace std;

int fibo(int n,int arr[])
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    if(arr[n]!=-1)
    {
        return arr[n];
    }
   
     arr[n]=fibo(n-1,arr)+fibo(n-2,arr);
     return arr[n];
    
    
}

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n+1;i++)
    {
        arr[i]=-1;
    }
    cout<<fibo(n,arr);
}