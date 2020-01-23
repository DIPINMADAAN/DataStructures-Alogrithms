#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void prime(int n)
{
    bool arr[n+1];
    memset(arr, 1, sizeof(arr));
    for(int i=2;i*i<=n;i++)
    {
        if(arr[i]==1)
        {
            for(int j=i*i;j<=n;j=j+i)
            {
                arr[j]=0;
            }
        }
    }
    for(int z=2;z<=n;z++)
    {
        if(arr[z]==1)
        {
            cout<<z<<" ";
        }
    }
}
int main() {
	int k;
    cin>>k;
	for(int i=0;i<k;i++)
	{
	    int n;
	    cin>>n;
	    prime(n);
	    cout<<endl;
	}
	return 0;
}
