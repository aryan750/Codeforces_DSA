#include<bits/stdc++.h>
using namespace std;

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans = a[0];
    
    for(int i =1;i<n;i++)
    {
        int k= max(a[i]-a[i-1],0);
        ans  += k;
    }

    cout<<ans<<endl;

    return 0;
}