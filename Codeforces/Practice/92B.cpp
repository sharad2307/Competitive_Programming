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

	ll x;
	cin>>x;
	ll ans=0;
// cout<<x%10;
	while(x!=1)
	{
		if(x%10==1)
		{
			x=x+1;
			// cout<<x;
			ans+=ans;
		}
		else
		{
			x=x/10;
			// cout<<x;
			ans+=ans;

		}
	}
	cout<<ans;

}