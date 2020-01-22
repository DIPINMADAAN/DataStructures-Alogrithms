#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int convert(int a,int b)
{
    int sum;
    if(b==0)
    {
        return 1;
    }
    sum=a*convert(a,b-1);
    return sum;
}
int main() {
    cout<<convert(2,5);
    return 0;
}

