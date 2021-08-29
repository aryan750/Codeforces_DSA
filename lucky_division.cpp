#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int a[]={4,44,444,7,77,777,47,74,447,477,474,747,774};
	for(int i=0;i<12;i++)
	{
		if(n%a[i] == 0)
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;

	return 0;
}