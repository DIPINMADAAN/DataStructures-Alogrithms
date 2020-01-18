#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    for(int i=1;i<=n;i++)
    {
        for(int k=n-i+1;k>1;k--)
        {
            cout<<" ";
        }
        for(int z=0;z<i;z++)
        {
            cout<<"#";
        }
        cout<<endl;
    }

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}

