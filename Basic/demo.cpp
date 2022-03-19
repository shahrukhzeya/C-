#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t, ans;
	while(t>0)
	{
		string s;
		cin>>s;
		
		int acount =0,bcount=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='a')
			{
				acount++;
			}
			else
			{
				bcount++;
			}
			if(acount>bcount)
			{
				ans=bcount;
			}
			else if(acount<bcount)
			{
				ans=acount;
			}
			else if(acount == bcount)
			{
				ans=acount;
			}
			else
			{
				ans=0;
			}
		}
		t--;
	}
	cout<<ans<<endl;
	return 0;
}