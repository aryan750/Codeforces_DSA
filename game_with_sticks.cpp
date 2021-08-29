#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	int m;
	cin>>n>>m;
	int count = 0;

	while(n>0 && m > 0)
	{
		count++;
		if(n == 1 || m == 1)
			break;
		n--;
		m--;
	}

	if(count %2 == 0)
		cout<<"Malvika"<<endl;
	else 
		cout<<"Akshat"<<endl;



	return 0;
}