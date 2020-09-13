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
	
	ll n,small=0,large=0,i;
	cin>>n;
	ll b[n];
	for(i=0;i<n;i++)
		cin>>b[i];

	sort(b,b+n);

	for(i=0;i<n;i++)
	{
		if(b[i]==b[0])
			small++;
		else if(b[i]==b[n-1])
			large++;
	}
	cout<<b[n-1]-b[0]<<" "<<small*large;
			
	
}