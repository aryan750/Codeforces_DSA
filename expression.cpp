#include<bits/stdc++.h>
using namespace std;


int main()
{
	int a, b, c;
	cin>>a>>b>>c;

	// - if a=1 then ans =(a+b)* c
	// - if c = 1 then ans = a * (b+c)
	// - if b = 1 then ans = max((a+b) * c, a * (b+c))
	// - else ans = a * b * c
	int ans = a+b+c;
	ans = max(ans, (a+b)*c );
	ans = max(ans, a+(b*c) );
	ans = max(ans, a*(b+c) );
	ans = max(ans, (a*b)+c );
	ans = max(ans, a*b*c );

	cout<<ans<<endl;
	return 0;
}