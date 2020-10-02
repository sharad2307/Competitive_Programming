#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define testcases ll t;cin>>t;while(t--)
#define pb push_back
#define all(x) x.begin(), x.end()
#define dec(x) greater<x>()


int main()
{
	#ifndef ONLINE_JUDGE
	freopen("C:/Users/91731/Documents/input.txt","r",stdin);
	freopen("C:/Users/91731/Documents/output.txt","w",stdout);
	freopen("C:/Users/91731/Documents/error.txt","w",stderr);
  #endif
	
	testcases
	{
		ll a,b,c,n;
		cin>>a>>b>>c>>n;
		ll z=max({a,b,c});
		ll sum= z-a + z-b + z-c;

		if((n-sum)%3 || (n-sum)<0)cout<<"NO"<<endl;
		else cout<<"YES"<<endl;

	}
			
	
}