#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int test,size;
    cin>>test;
    for(int k=0;k<test;k++)
    {
        cin>>size;
        if(size==0)
        {
            cout<<"Case "<<k+1<<": 0"<<endl; 
        }
        else{
        long long int arr[size];
        long long int check[size]={-1};
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        check[0]=arr[0];
        check[1]=max(arr[0],arr[1]);
        for(int i=2;i<size;i++)
        {
            check[i]=max((arr[i]+check[i-2]),check[i-1]);
        }
        cout<<"Case "<<k+1<<": "<<check[size-1]<<endl;}
    }
}

