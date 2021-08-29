#include<bits/stdc++.h>
using namespace std;

int main()
{

	int a[5][5];
	int x2,y2;

	//input
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>a[i][j];
			if(a[i][j] == 1)
			{
				x2 = i;
				y2 = j;
			}

		}
	}
	int ans = abs(x2-2) + abs(y2-2);
	cout<<ans<<endl;


	return 0;
}