#include<iostream>
using namespace std;
int main()
{
	int n,sum = 0;
	cin>>n;
	int temp = n;
	while(temp>0)
	{
		int rem =temp%10;
		int fact = 1;
		while(rem>0)//9
		{
			
			fact = fact * rem;
			rem--;
		}
		sum += fact; //120
		temp/=10;

	}
	// cout<<j<<endl;
	if(n == sum)
	cout<<"yes strong number"<<endl;
	else
	cout<<"Not a strong number"<<endl;
	return 0;
}