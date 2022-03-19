/* 
code to check hcf or gcd of two number
*/


#include<iostream>
using namespace std;
int main()
{
	int a,b,minimum;
	cin>>a>>b;
	minimum = min(a,b);
	int i =1,ans;
	while(i<= minimum)
	{
		if(a%i ==0 && b %i ==0)
		{
			ans = i;
		}
		i++;
	}
	cout<<ans<<endl;

	return 0;
}