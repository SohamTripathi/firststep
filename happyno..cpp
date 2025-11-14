#include <iostream>
using namespace std;

int main()
{
	int sum=0,d,num;
	cout<<"enter a number"<<endl;
	cin>>num;
	while(true)
	{	
    	while (num!=0)
		{
			d = num%10;
			sum +=  d*d;
			num /= 10;
		}
        if(sum==1)
		{	
			cout<<"it is a happy number"<<endl;
			break;
		}
		else if(num==0)
		{
			num = sum;
			sum=0;
		}
	}
}



