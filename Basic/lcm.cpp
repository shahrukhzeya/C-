#include<iostream>
using namespace std;
int main()
{
	int a,b,minimum, maximum; 
	cin>>a>>b;               // 4 6
	minimum = min(a,b);      // 4
	maximum = max(a,b);      // 6
	int i =1,ans=1;
	while(i<=maximum) // 1 2
	{
		if(a>b)
		{
			if(minimum * i % maximum ==0)
			{
				ans = minimum * i;
				break;
			}
		}
		else if(a<b)
		{
			if(minimum * i % maximum ==0) // 4%6=4 8%6=2
			{
				ans = minimum * i;
				break;
			}
		}
		else
		{
			ans = a;
			break;
		}
		i++;
	}
	cout<<ans<<endl;

	return 0;
}