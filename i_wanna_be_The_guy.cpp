#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int count[256] = {0};
	int p;
	int q;
	
	
	cin>>p;
	int a[p];
	for(int i=0;i<p;i++)
	{
		cin>>a[i];
		count[a[i]] = 1;
	}

	cin>>q;
	int b[q];
	
	for(int i=0;i<q;i++)
	{
		cin>>b[i];
		count[b[i]] = 1;
	}
	int sum =0;
	for(int i=0;i<256;i++)
	{
		sum+= count[i];
	}

	if(sum == n)
		cout<<"I become the guy."<<endl;
	else
		cout<<"Oh, my keyboard!"<<endl;

	return 0;
}