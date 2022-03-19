#include<iostream>
using namespace std;
int main()
{
	int i,n;
	float sum =0,a;
	cin>>n;
	
	for(i=1; i<=n;i++)
	{

		sum += 1/float(i);
	}
	cout<<sum<<endl;

	return 0;
}