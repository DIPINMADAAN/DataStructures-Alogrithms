#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int convert(int i,string str)
{
    int sum,x;
    if(i==-1)
    {
        return 0;
    }
    sum=((int)(str[i])-48)+convert(i-1,str)*10;
    return sum;
}
int main() {
    string str;
    cin>>str;
    cout<<convert(str.length()-1,str);
    return 0;
}

