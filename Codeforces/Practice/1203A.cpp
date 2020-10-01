#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define testcases ll t;cin>>t;while(t--)

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("C:/Users/91731/Documents/input.txt","r",stdin);
	freopen("C:/Users/91731/Documents/output.txt","w",stdout);
	freopen("C:/Users/91731/Documents/error.txt","w",stderr);
  #endif
	
	testcases
	{
		ll n,i;
		cin>>n;
		ll a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		i=1;
		while((abs(a[i]-a[i-1])==1||abs(a[i]-a[i-1])==n-1) && i<n)

			i++;
		if(i==n)
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

	}	
}
