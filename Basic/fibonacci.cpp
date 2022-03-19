#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,prev =0,curr=1,temp;
	cin>>n;
	if(n==0)
	cout<<"0";
	else
	{
		for(int i=2;i<=n;i++)
	{
		temp= prev + curr;
		prev= curr;
		curr= temp;
		
	}
	cout<<curr<<endl;
	}
	
	return 0;

}
