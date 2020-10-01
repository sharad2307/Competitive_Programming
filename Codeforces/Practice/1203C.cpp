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
	

	ll n;
	cin>>n;
	ll x=1,a=1;
	set<ll>s;
	cin>>a;
	loop(i,1,n)
	{
		cin>>x;
		a=__gcd(a,x);

	}
	for(ll i=1;i<=sqrt(a);i++)
	{
		if(a%i==0)
		{
			s.insert(i);
			s.insert(a/i);
		}
	}
	cout<<s.size(); 	

}
