#include <iostream>
using namespace std;
int main() {
int itr;
cin>>itr;
for(int k=0;k<itr;k++)
{
	int size,val;
	cin>>size>>val;
	int arr[size];
	for(int f=0;f<size;f++)
		cin>>arr[f];
	int j=0,i=0,sum=0,length=0,maxlen=0,maxsum=0;
       	for(int i=0,j=0;j<size;j++)
       	{
 		sum=sum+arr[j];
            	while(sum>val)
		{
                	sum=sum-arr[i];
			i++;
		}
            	length=j-i+1;
            	if(length>maxlen)
            	{
                	maxlen=length;
                	maxsum=sum;
            	}
            	else if(length==maxlen)
                	maxsum=min(maxsum,sum);
        }
        cout<<maxsum<<" "<<maxlen<<endl;
}
return 0;
}        
		
