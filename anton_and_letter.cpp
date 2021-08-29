#include<bits/stdc++.h>
using namespace std;


int main()
{
	int count[256] = {0};
	string a;
	getline(cin, a);
	
	for(int i =1 ;i<a.size()-1;i=i+3)
	{
		count[(int)a[i]] = 1;
	}
	int ans=0;
	for(int i =0 ;i <256;i++)
	{
		ans += count[i];	
	}

	cout<<ans<<endl;


	return 0;
}