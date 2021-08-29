#include<bits/stdc++.h>
using namespace std;

bool mycompare(pair<int,int>p1, pair<int,int> p2){

	return p1.first > p2.first;

}

int main()
{
	int n;
	cin>>n;
	int k;
	cin>>k;

	pair<int,int> p[n];
	for(int i=0;i<n;i++){
		cin>>p[i].first;
		cin>>p[i].second;
	}

	sort(p,p+n,mycompare);

	// for(int i=0;i<n;i++){
	// 	cout<<p[i].first<<" "<<p[i].second<<endl;
	// }
	int l;
	int s=0;
	int e = n-1;
	int key = k;

	int l = 



	int mid;
	while(s<e){
		mid = (s+e)/2;
		if(p[mid].first == key){
			l = mid;
			break;
		}
		else if(p[mid].first > key){
			e = mid-1;
		}
		else{
			s = mid+1;
		}
	}

	int count=1;
	for(int i = mid;i<n;i++){
		if(p[i].first == key){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}