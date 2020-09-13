#include<bits/stdc++.h>
using namespace std;
#define ll long long




int main()
{
	#ifndef ONLINE_JUDGE
	freopen("C:/Users/91731/Documents/input.txt","r",stdin);
	freopen("C:/Users/91731/Documents/output.txt","w",stdout);
	freopen("C:/Users/91731/Documents/error.txt","w",stderr);
  #endif

	int n=0, k=0, p=0,sum=0;
	string a;
	cin>>a;
	n= a.length();

	for(int i=0; i<n; i++)
		if( a[i] == '1') { p++; k=i+1; }

	sum = n+k-p+1;
	if(p==1) sum-=2;

	cout<<sum<<endl;

	return 0;
}