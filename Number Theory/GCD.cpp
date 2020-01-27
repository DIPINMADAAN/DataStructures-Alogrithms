#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);    
}
int main() {
	int itr;
	cin>>itr;
	for(int i=0;i<itr;i++)
	{
	    int a,b;
	    cin>>a>>b;
	    cout<<gcd(a,b)<<endl;
	}
	return 0;
}
