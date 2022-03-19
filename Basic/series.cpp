#include<iostream>
using namespace std;
int main()
{
	long long n,i=1,sum =0;
	cin>>n;
	while(n>0)
	{
		sum +=i;
		cout<<i<<" ";
		i =(i * 10)+1;
		
		n--;
	}
	cout<<endl<<sum;
	

	return 0;

}