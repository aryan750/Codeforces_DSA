#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int x1,y1;
	int x2,y2;
	int x3,y3;
	int x4,y4;

	cin>>x1>>y1;
	cin>>x2>>y2;

	int m = (y2-y1)/(x2-x1);

	if(x1 != x2 && y1 != y2)
	{
		x3 = x1;
		y3 = y2;
		x4 = x2;
		y4 = y1;
	}
	else if(x1 == x2 || y1 == y2)
	{
		x3 = y2;
		y3 = x2;
		x4 = x3;
		y4 = y2;
	}
	else
	{
		cout<<"-1"<<endl;
	}

	float mx = x2-x1;
	float my = y2-y1;
	int flag= 0;
	if(abs(mx) == abs(x4-x3) || abs(my) == abs(y4-y3))
	{
		flag =1;
	}

	if(flag)
	{
		cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
	}
	else 
		cout<<"-1"<<endl;



	return 0;
}