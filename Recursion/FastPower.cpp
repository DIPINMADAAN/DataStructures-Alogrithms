#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int convert(int a,int b)
{
    int smallans,sum;
    if(b==0)
    {
        return 1;
    }
    smallans=convert(a,b/2);
    sum=smallans*smallans;
    if(b%2!=0)
    {
        sum=a*sum;
    }
    return sum;
}
int main() {
    cout<<convert(2,8)<<endl;
    cout<<convert(2,7);
    return 0;
}

