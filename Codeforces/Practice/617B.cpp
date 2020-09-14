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
	
	ll n,ans=0,i,c=0;
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		ll t;
		cin>>t;
		if(t==0)
			c++;
		else
		{
			ans*=c;
			if(ans==0)
				ans++;
			c=1;
		}
	}
	cout<<ans;
	return 0;

	
}