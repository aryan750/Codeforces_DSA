#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int m;
	cin>>n;
	cin>>m;

	int a[m];
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}

	sort(a, a+m);
	int mini = INT_MAX;
	
	for(int i= 0;i<=m-n;i++)
	{
		int j = i+n-1;
		mini = min(a[j] - a[i] , mini);
		j++;
	}


	cout<<mini<<endl;


	return 0;
}